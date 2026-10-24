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

// Function: func_0038BBB8
// Address: 0x38bbb8 - 0x38bbd8
void func_0038BBB8_0x38bbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038BBB8_0x38bbb8");
#endif

    switch (ctx->pc) {
        case 0x38bbc8u: goto label_38bbc8;
        default: break;
    }

    ctx->pc = 0x38bbb8u;

    // 0x38bbb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38bbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38bbbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38bbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38bbc0: 0xc0e3924  jal         func_38E490
    ctx->pc = 0x38BBC0u;
    SET_GPR_U32(ctx, 31, 0x38BBC8u);
    ctx->pc = 0x38E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E490u, 0x38BBC0u, 0x38BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BBC8u;
label_38bbc8:
    // 0x38bbc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38bbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38bbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x38BBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BBCCu;
        // 0x38bbd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BBD4u;
    // 0x38bbd4: 0x0  nop
    ctx->pc = 0x38bbd4u;
    // NOP
    ctx->pc = 0x38bbd8u;
}
