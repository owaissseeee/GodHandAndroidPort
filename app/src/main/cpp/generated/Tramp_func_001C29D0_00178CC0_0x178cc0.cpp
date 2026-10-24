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

// Function: Tramp_func_001C29D0_00178CC0
// Address: 0x178cc0 - 0x178ce0
void Tramp_func_001C29D0_00178CC0_0x178cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001C29D0_00178CC0_0x178cc0");
#endif

    switch (ctx->pc) {
        case 0x178cd0u: goto label_178cd0;
        default: break;
    }

    ctx->pc = 0x178cc0u;

    // 0x178cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178cc8: 0xc070a74  jal         func_1C29D0
    ctx->pc = 0x178CC8u;
    SET_GPR_U32(ctx, 31, 0x178CD0u);
    ctx->pc = 0x1C29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C29D0u, 0x178CC8u, 0x178CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178CD0u;
label_178cd0:
    // 0x178cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x178CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CD4u;
        // 0x178cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178CDCu;
    // 0x178cdc: 0x0  nop
    ctx->pc = 0x178cdcu;
    // NOP
    ctx->pc = 0x178ce0u;
}
