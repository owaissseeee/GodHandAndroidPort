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

// Function: func_001D6BC0
// Address: 0x1d6bc0 - 0x1d6be0
void func_001D6BC0_0x1d6bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D6BC0_0x1d6bc0");
#endif

    switch (ctx->pc) {
        case 0x1d6bd4u: goto label_1d6bd4;
        default: break;
    }

    ctx->pc = 0x1d6bc0u;

    // 0x1d6bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6bc4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d6bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6bcc: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6BCCu;
    SET_GPR_U32(ctx, 31, 0x1D6BD4u);
    ctx->pc = 0x1D6BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BCCu;
    // 0x1d6bd0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6BCCu, 0x1D6BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BD4u;
label_1d6bd4:
    // 0x1d6bd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BD8u;
        // 0x1d6bdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6BE0u;
}
