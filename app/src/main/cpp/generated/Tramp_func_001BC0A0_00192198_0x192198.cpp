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

// Function: Tramp_func_001BC0A0_00192198
// Address: 0x192198 - 0x1921b8
void Tramp_func_001BC0A0_00192198_0x192198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001BC0A0_00192198_0x192198");
#endif

    switch (ctx->pc) {
        case 0x1921a8u: goto label_1921a8;
        default: break;
    }

    ctx->pc = 0x192198u;

    // 0x192198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19219c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19219cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1921a0: 0xc06f028  jal         func_1BC0A0
    ctx->pc = 0x1921A0u;
    SET_GPR_U32(ctx, 31, 0x1921A8u);
    ctx->pc = 0x1BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC0A0u, 0x1921A0u, 0x1921A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1921A8u;
label_1921a8:
    // 0x1921a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1921a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1921ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1921ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1921B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921ACu;
        // 0x1921b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1921ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1921B4u;
    // 0x1921b4: 0x0  nop
    ctx->pc = 0x1921b4u;
    // NOP
    ctx->pc = 0x1921b8u;
}
