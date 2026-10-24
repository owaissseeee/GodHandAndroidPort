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

// Function: Tramp_write__7ostreamPCci_38A608
// Address: 0x38a608 - 0x38a628
void Tramp_write__7ostreamPCci_38A608_0x38a608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_write__7ostreamPCci_38A608_0x38a608");
#endif

    switch (ctx->pc) {
        case 0x38a618u: goto label_38a618;
        default: break;
    }

    ctx->pc = 0x38a608u;

    // 0x38a608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a60c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a610: 0xc0e2524  jal         func_389490
    ctx->pc = 0x38A610u;
    SET_GPR_U32(ctx, 31, 0x38A618u);
    ctx->pc = 0x389490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389490u, 0x38A610u, 0x38A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A618u;
label_38a618:
    // 0x38a618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a61c: 0x3e00008  jr          $ra
    ctx->pc = 0x38A61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A61Cu;
        // 0x38a620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A624u;
    // 0x38a624: 0x0  nop
    ctx->pc = 0x38a624u;
    // NOP
    ctx->pc = 0x38a628u;
}
