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

// Function: func_0028BEA8
// Address: 0x28bea8 - 0x28bec8
void func_0028BEA8_0x28bea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028BEA8_0x28bea8");
#endif

    switch (ctx->pc) {
        case 0x28beb8u: goto label_28beb8;
        default: break;
    }

    ctx->pc = 0x28bea8u;

    // 0x28bea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28bea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28beac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28beacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28beb0: 0xc0a339c  jal         func_28CE70
    ctx->pc = 0x28BEB0u;
    SET_GPR_U32(ctx, 31, 0x28BEB8u);
    ctx->pc = 0x28CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CE70u, 0x28BEB0u, 0x28BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BEB8u;
label_28beb8:
    // 0x28beb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28beb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bebc: 0x3e00008  jr          $ra
    ctx->pc = 0x28BEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEBCu;
        // 0x28bec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BEC4u;
    // 0x28bec4: 0x0  nop
    ctx->pc = 0x28bec4u;
    // NOP
    ctx->pc = 0x28bec8u;
}
