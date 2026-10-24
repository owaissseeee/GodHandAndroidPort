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

// Function: func_0019E650
// Address: 0x19e650 - 0x19e670
void func_0019E650_0x19e650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019E650_0x19e650");
#endif

    switch (ctx->pc) {
        case 0x19e660u: goto label_19e660;
        default: break;
    }

    ctx->pc = 0x19e650u;

    // 0x19e650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e658: 0xc070a74  jal         func_1C29D0
    ctx->pc = 0x19E658u;
    SET_GPR_U32(ctx, 31, 0x19E660u);
    ctx->pc = 0x1C29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C29D0u, 0x19E658u, 0x19E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E660u;
label_19e660:
    // 0x19e660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e664: 0x3e00008  jr          $ra
    ctx->pc = 0x19E664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E664u;
        // 0x19e668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E66Cu;
    // 0x19e66c: 0x0  nop
    ctx->pc = 0x19e66cu;
    // NOP
    ctx->pc = 0x19e670u;
}
