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

// Function: Tramp_func_001614D0_00161BB0_161BB0
// Address: 0x161bb0 - 0x161bd0
void Tramp_func_001614D0_00161BB0_161BB0_0x161bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001614D0_00161BB0_161BB0_0x161bb0");
#endif

    switch (ctx->pc) {
        case 0x161bc0u: goto label_161bc0;
        default: break;
    }

    ctx->pc = 0x161bb0u;

    // 0x161bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161bb8: 0xc058534  jal         func_1614D0
    ctx->pc = 0x161BB8u;
    SET_GPR_U32(ctx, 31, 0x161BC0u);
    ctx->pc = 0x1614D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1614D0u, 0x161BB8u, 0x161BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161BC0u;
label_161bc0:
    // 0x161bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x161BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BC4u;
        // 0x161bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161BCCu;
    // 0x161bcc: 0x0  nop
    ctx->pc = 0x161bccu;
    // NOP
    ctx->pc = 0x161bd0u;
}
