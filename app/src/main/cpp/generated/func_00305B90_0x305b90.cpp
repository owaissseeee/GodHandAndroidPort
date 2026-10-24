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

// Function: func_00305B90
// Address: 0x305b90 - 0x305bc0
void func_00305B90_0x305b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00305B90_0x305b90");
#endif

    switch (ctx->pc) {
        case 0x305ba0u: goto label_305ba0;
        case 0x305ba8u: goto label_305ba8;
        default: break;
    }

    ctx->pc = 0x305b90u;

    // 0x305b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x305b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x305b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x305b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x305b98: 0xc0c020c  jal         func_300830
    ctx->pc = 0x305B98u;
    SET_GPR_U32(ctx, 31, 0x305BA0u);
    ctx->pc = 0x300830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300830u, 0x305B98u, 0x305BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BA0u;
label_305ba0:
    // 0x305ba0: 0xc0bee66  jal         func_2FB998
    ctx->pc = 0x305BA0u;
    SET_GPR_U32(ctx, 31, 0x305BA8u);
    ctx->pc = 0x2FB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB998u, 0x305BA0u, 0x305BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BA8u;
label_305ba8:
    // 0x305ba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305bac: 0x3e00008  jr          $ra
    ctx->pc = 0x305BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BACu;
        // 0x305bb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305BB4u;
    // 0x305bb4: 0x0  nop
    ctx->pc = 0x305bb4u;
    // NOP
    // 0x305bb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x305bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x305bbc: 0x0  nop
    ctx->pc = 0x305bbcu;
    // NOP
    ctx->pc = 0x305bc0u;
}
