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

// Function: Tramp__IO_file_sync_38EFE0
// Address: 0x38efe0 - 0x38f000
void Tramp__IO_file_sync_38EFE0_0x38efe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp__IO_file_sync_38EFE0_0x38efe0");
#endif

    switch (ctx->pc) {
        case 0x38eff0u: goto label_38eff0;
        default: break;
    }

    ctx->pc = 0x38efe0u;

    // 0x38efe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38efe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38efe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38efe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38efe8: 0xc0e4b92  jal         func_392E48
    ctx->pc = 0x38EFE8u;
    SET_GPR_U32(ctx, 31, 0x38EFF0u);
    ctx->pc = 0x392E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392E48u, 0x38EFE8u, 0x38EFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EFF0u;
label_38eff0:
    // 0x38eff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38eff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38eff4: 0x3e00008  jr          $ra
    ctx->pc = 0x38EFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EFF4u;
        // 0x38eff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EFFCu;
    // 0x38effc: 0x0  nop
    ctx->pc = 0x38effcu;
    // NOP
    ctx->pc = 0x38f000u;
}
