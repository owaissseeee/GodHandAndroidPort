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

// Function: func_0038EF20
// Address: 0x38ef20 - 0x38ef40
void func_0038EF20_0x38ef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038EF20_0x38ef20");
#endif

    switch (ctx->pc) {
        case 0x38ef30u: goto label_38ef30;
        default: break;
    }

    ctx->pc = 0x38ef20u;

    // 0x38ef20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38ef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38ef24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38ef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38ef28: 0xc0e4a0c  jal         func_392830
    ctx->pc = 0x38EF28u;
    SET_GPR_U32(ctx, 31, 0x38EF30u);
    ctx->pc = 0x392830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392830u, 0x38EF28u, 0x38EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EF30u;
label_38ef30:
    // 0x38ef30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38ef30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ef34: 0x3e00008  jr          $ra
    ctx->pc = 0x38EF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF34u;
        // 0x38ef38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EF3Cu;
    // 0x38ef3c: 0x0  nop
    ctx->pc = 0x38ef3cu;
    // NOP
    ctx->pc = 0x38ef40u;
}
