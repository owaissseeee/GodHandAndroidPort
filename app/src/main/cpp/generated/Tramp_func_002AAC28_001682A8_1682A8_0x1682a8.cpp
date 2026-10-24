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

// Function: Tramp_func_002AAC28_001682A8_1682A8
// Address: 0x1682a8 - 0x1682c8
void Tramp_func_002AAC28_001682A8_1682A8_0x1682a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_002AAC28_001682A8_1682A8_0x1682a8");
#endif

    switch (ctx->pc) {
        case 0x1682b8u: goto label_1682b8;
        default: break;
    }

    ctx->pc = 0x1682a8u;

    // 0x1682a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1682a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1682ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1682acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1682b0: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1682B0u;
    SET_GPR_U32(ctx, 31, 0x1682B8u);
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1682B0u, 0x1682B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1682B8u;
label_1682b8:
    // 0x1682b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1682b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1682bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1682BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1682C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1682BCu;
        // 0x1682c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1682BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1682C4u;
    // 0x1682c4: 0x0  nop
    ctx->pc = 0x1682c4u;
    // NOP
    ctx->pc = 0x1682c8u;
}
