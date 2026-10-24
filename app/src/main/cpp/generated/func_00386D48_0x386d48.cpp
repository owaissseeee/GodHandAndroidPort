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

// Function: func_00386D48
// Address: 0x386d48 - 0x386d70
void func_00386D48_0x386d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00386D48_0x386d48");
#endif

    switch (ctx->pc) {
        case 0x386d58u: goto label_386d58;
        case 0x386d60u: goto label_386d60;
        default: break;
    }

    ctx->pc = 0x386d48u;

    // 0x386d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x386d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x386d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x386d50: 0xc0e1b5c  jal         func_386D70
    ctx->pc = 0x386D50u;
    SET_GPR_U32(ctx, 31, 0x386D58u);
    ctx->pc = 0x386D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386D70u, 0x386D50u, 0x386D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386D58u;
label_386d58:
    // 0x386d58: 0xc0defa6  jal         func_37BE98
    ctx->pc = 0x386D58u;
    SET_GPR_U32(ctx, 31, 0x386D60u);
    ctx->pc = 0x37BE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37BE98u, 0x386D58u, 0x386D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386D60u;
label_386d60:
    // 0x386d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386d64: 0x3e00008  jr          $ra
    ctx->pc = 0x386D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D64u;
        // 0x386d68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386D6Cu;
    // 0x386d6c: 0x0  nop
    ctx->pc = 0x386d6cu;
    // NOP
    ctx->pc = 0x386d70u;
}
