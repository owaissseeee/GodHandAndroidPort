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

// Function: func_00393298
// Address: 0x393298 - 0x3932b8
void func_00393298_0x393298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00393298_0x393298");
#endif

    switch (ctx->pc) {
        case 0x3932a8u: goto label_3932a8;
        default: break;
    }

    ctx->pc = 0x393298u;

    // 0x393298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x393298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39329c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39329cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3932a0: 0xc0ec0e2  jal         func_3B0388
    ctx->pc = 0x3932A0u;
    SET_GPR_U32(ctx, 31, 0x3932A8u);
    ctx->pc = 0x3932A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3932A0u;
    // 0x3932a4: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0388u, 0x3932A0u, 0x3932A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3932A8u;
label_3932a8:
    // 0x3932a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3932a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3932ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3932ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3932B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932ACu;
        // 0x3932b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3932ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3932B4u;
    // 0x3932b4: 0x0  nop
    ctx->pc = 0x3932b4u;
    // NOP
    ctx->pc = 0x3932b8u;
}
