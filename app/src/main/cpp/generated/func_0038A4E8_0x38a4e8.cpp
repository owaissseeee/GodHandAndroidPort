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

// Function: func_0038A4E8
// Address: 0x38a4e8 - 0x38a508
void func_0038A4E8_0x38a4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038A4E8_0x38a4e8");
#endif

    switch (ctx->pc) {
        case 0x38a4f8u: goto label_38a4f8;
        default: break;
    }

    ctx->pc = 0x38a4e8u;

    // 0x38a4e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a4ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a4f0: 0xc0e2280  jal         func_388A00
    ctx->pc = 0x38A4F0u;
    SET_GPR_U32(ctx, 31, 0x38A4F8u);
    ctx->pc = 0x388A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388A00u, 0x38A4F0u, 0x38A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A4F8u;
label_38a4f8:
    // 0x38a4f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x38A4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A4FCu;
        // 0x38a500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A504u;
    // 0x38a504: 0x0  nop
    ctx->pc = 0x38a504u;
    // NOP
    ctx->pc = 0x38a508u;
}
