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

// Function: CustomIDWork_SetNumber_1D5760
// Address: 0x1d5760 - 0x1d5780
void CustomIDWork_SetNumber_1D5760_0x1d5760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetNumber_1D5760_0x1d5760");
#endif

    switch (ctx->pc) {
        case 0x1d5770u: goto label_1d5770;
        default: break;
    }

    ctx->pc = 0x1d5760u;

    // 0x1d5760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5768: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1D5768u;
    SET_GPR_U32(ctx, 31, 0x1D5770u);
    ctx->pc = 0x1D576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5768u;
    // 0x1d576c: 0x24840158  addiu       $a0, $a0, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1D5768u, 0x1D5770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5770u;
label_1d5770:
    // 0x1d5770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5774: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5774u;
        // 0x1d5778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D577Cu;
    // 0x1d577c: 0x0  nop
    ctx->pc = 0x1d577cu;
    // NOP
    ctx->pc = 0x1d5780u;
}
