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

// Function: func_0038EFC0
// Address: 0x38efc0 - 0x38efe0
void func_0038EFC0_0x38efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038EFC0_0x38efc0");
#endif

    switch (ctx->pc) {
        case 0x38efd0u: goto label_38efd0;
        default: break;
    }

    ctx->pc = 0x38efc0u;

    // 0x38efc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38efc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38efc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38efc8: 0xc0e4ae8  jal         func_392BA0
    ctx->pc = 0x38EFC8u;
    SET_GPR_U32(ctx, 31, 0x38EFD0u);
    ctx->pc = 0x392BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392BA0u, 0x38EFC8u, 0x38EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EFD0u;
label_38efd0:
    // 0x38efd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38efd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38efd4: 0x3e00008  jr          $ra
    ctx->pc = 0x38EFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EFD4u;
        // 0x38efd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EFDCu;
    // 0x38efdc: 0x0  nop
    ctx->pc = 0x38efdcu;
    // NOP
    ctx->pc = 0x38efe0u;
}
