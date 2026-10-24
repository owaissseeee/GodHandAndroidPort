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

// Function: func_00321268
// Address: 0x321268 - 0x321288
void func_00321268_0x321268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00321268_0x321268");
#endif

    switch (ctx->pc) {
        case 0x321278u: goto label_321278;
        default: break;
    }

    ctx->pc = 0x321268u;

    // 0x321268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x321268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32126c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32126cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x321270: 0xc0c80d8  jal         func_320360
    ctx->pc = 0x321270u;
    SET_GPR_U32(ctx, 31, 0x321278u);
    ctx->pc = 0x320360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320360u, 0x321270u, 0x321278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321278u;
label_321278:
    // 0x321278: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x321278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32127c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32127cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321280: 0x3e00008  jr          $ra
    ctx->pc = 0x321280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321280u;
        // 0x321284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321288u;
}
