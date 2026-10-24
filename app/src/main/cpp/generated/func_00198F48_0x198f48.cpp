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

// Function: func_00198F48
// Address: 0x198f48 - 0x198f68
void func_00198F48_0x198f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00198F48_0x198f48");
#endif

    switch (ctx->pc) {
        case 0x198f58u: goto label_198f58;
        default: break;
    }

    ctx->pc = 0x198f48u;

    // 0x198f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198f4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198f50: 0xc06fee0  jal         func_1BFB80
    ctx->pc = 0x198F50u;
    SET_GPR_U32(ctx, 31, 0x198F58u);
    ctx->pc = 0x1BFB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB80u, 0x198F50u, 0x198F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F58u;
label_198f58:
    // 0x198f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x198F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F5Cu;
        // 0x198f60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198F64u;
    // 0x198f64: 0x0  nop
    ctx->pc = 0x198f64u;
    // NOP
    ctx->pc = 0x198f68u;
}
