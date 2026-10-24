#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: GetInfoGameLevel__6cMcSysi
// Address: 0x7c9460 - 0x7c9480
void GetInfoGameLevel__6cMcSysi_0x7c9460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInfoGameLevel__6cMcSysi_0x7c9460");
#endif

    switch (ctx->pc) {
        case 0x7c9470u: goto label_7c9470;
        default: break;
    }

    ctx->pc = 0x7c9460u;

    // 0x7c9460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c9460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c9464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c9464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c9468: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C9468u;
    SET_GPR_U32(ctx, 31, 0x7C9470u);
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C9468u, 0x7C9470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9470u;
label_7c9470:
    // 0x7c9470: 0x80420010  lb          $v0, 0x10($v0)
    ctx->pc = 0x7c9470u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x7c9474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c9474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c9478: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9478u;
        // 0x7c947c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9480u;
}
} // namespace gh_mcport
