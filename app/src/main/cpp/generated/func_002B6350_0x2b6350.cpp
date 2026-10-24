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

// Function: func_002B6350
// Address: 0x2b6350 - 0x2b6370
void func_002B6350_0x2b6350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B6350_0x2b6350");
#endif

    switch (ctx->pc) {
        case 0x2b6360u: goto label_2b6360;
        default: break;
    }

    ctx->pc = 0x2b6350u;

    // 0x2b6350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6358: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2B6358u;
    SET_GPR_U32(ctx, 31, 0x2B6360u);
    ctx->pc = 0x2B635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6358u;
    // 0x2b635c: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2B6358u, 0x2B6360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6360u;
label_2b6360:
    // 0x2b6360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6364: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6364u;
        // 0x2b6368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B636Cu;
    // 0x2b636c: 0x0  nop
    ctx->pc = 0x2b636cu;
    // NOP
    ctx->pc = 0x2b6370u;
}
