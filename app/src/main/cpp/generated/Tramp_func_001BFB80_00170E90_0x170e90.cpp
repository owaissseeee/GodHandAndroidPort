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

// Function: Tramp_func_001BFB80_00170E90
// Address: 0x170e90 - 0x170eb0
void Tramp_func_001BFB80_00170E90_0x170e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001BFB80_00170E90_0x170e90");
#endif

    switch (ctx->pc) {
        case 0x170ea0u: goto label_170ea0;
        default: break;
    }

    ctx->pc = 0x170e90u;

    // 0x170e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170e98: 0xc06fee0  jal         func_1BFB80
    ctx->pc = 0x170E98u;
    SET_GPR_U32(ctx, 31, 0x170EA0u);
    ctx->pc = 0x1BFB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB80u, 0x170E98u, 0x170EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EA0u;
label_170ea0:
    // 0x170ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x170EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EA4u;
        // 0x170ea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170EACu;
    // 0x170eac: 0x0  nop
    ctx->pc = 0x170eacu;
    // NOP
    ctx->pc = 0x170eb0u;
}
