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

// Function: Tramp_read__7istreamPci_38A198
// Address: 0x38a198 - 0x38a1b8
void Tramp_read__7istreamPci_38A198_0x38a198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_read__7istreamPci_38A198_0x38a198");
#endif

    switch (ctx->pc) {
        case 0x38a1a8u: goto label_38a1a8;
        default: break;
    }

    ctx->pc = 0x38a198u;

    // 0x38a198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a19c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a1a0: 0xc0e1e24  jal         func_387890
    ctx->pc = 0x38A1A0u;
    SET_GPR_U32(ctx, 31, 0x38A1A8u);
    ctx->pc = 0x387890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387890u, 0x38A1A0u, 0x38A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A1A8u;
label_38a1a8:
    // 0x38a1a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x38A1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A1ACu;
        // 0x38a1b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A1B4u;
    // 0x38a1b4: 0x0  nop
    ctx->pc = 0x38a1b4u;
    // NOP
    ctx->pc = 0x38a1b8u;
}
