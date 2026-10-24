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

// Function: Tramp_ostream___ls_38A568
// Address: 0x38a568 - 0x38a588
void Tramp_ostream___ls_38A568_0x38a568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_ostream___ls_38A568_0x38a568");
#endif

    switch (ctx->pc) {
        case 0x38a578u: goto label_38a578;
        default: break;
    }

    ctx->pc = 0x38a568u;

    // 0x38a568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a56c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a570: 0xc0e238c  jal         func_388E30
    ctx->pc = 0x38A570u;
    SET_GPR_U32(ctx, 31, 0x38A578u);
    ctx->pc = 0x388E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388E30u, 0x38A570u, 0x38A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A578u;
label_38a578:
    // 0x38a578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a57c: 0x3e00008  jr          $ra
    ctx->pc = 0x38A57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A57Cu;
        // 0x38a580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A584u;
    // 0x38a584: 0x0  nop
    ctx->pc = 0x38a584u;
    // NOP
    ctx->pc = 0x38a588u;
}
