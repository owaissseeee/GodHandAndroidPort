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

// Function: func_0019D538
// Address: 0x19d538 - 0x19d558
void func_0019D538_0x19d538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019D538_0x19d538");
#endif

    switch (ctx->pc) {
        case 0x19d548u: goto label_19d548;
        default: break;
    }

    ctx->pc = 0x19d538u;

    // 0x19d538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d53c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d540: 0xc06f028  jal         func_1BC0A0
    ctx->pc = 0x19D540u;
    SET_GPR_U32(ctx, 31, 0x19D548u);
    ctx->pc = 0x1BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC0A0u, 0x19D540u, 0x19D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D548u;
label_19d548:
    // 0x19d548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d54c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D54Cu;
        // 0x19d550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D554u;
    // 0x19d554: 0x0  nop
    ctx->pc = 0x19d554u;
    // NOP
    ctx->pc = 0x19d558u;
}
