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

// Function: func_0038A258
// Address: 0x38a258 - 0x38a278
void func_0038A258_0x38a258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038A258_0x38a258");
#endif

    switch (ctx->pc) {
        case 0x38a268u: goto label_38a268;
        default: break;
    }

    ctx->pc = 0x38a258u;

    // 0x38a258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a25c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a260: 0xc0e1d84  jal         func_387610
    ctx->pc = 0x38A260u;
    SET_GPR_U32(ctx, 31, 0x38A268u);
    ctx->pc = 0x387610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387610u, 0x38A260u, 0x38A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A268u;
label_38a268:
    // 0x38a268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a26c: 0x3e00008  jr          $ra
    ctx->pc = 0x38A26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A26Cu;
        // 0x38a270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A274u;
    // 0x38a274: 0x0  nop
    ctx->pc = 0x38a274u;
    // NOP
    ctx->pc = 0x38a278u;
}
