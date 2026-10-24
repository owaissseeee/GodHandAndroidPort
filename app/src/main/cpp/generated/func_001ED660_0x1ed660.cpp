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

// Function: func_001ED660
// Address: 0x1ed660 - 0x1ed680
void func_001ED660_0x1ed660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ED660_0x1ed660");
#endif

    switch (ctx->pc) {
        case 0x1ed670u: goto label_1ed670;
        default: break;
    }

    ctx->pc = 0x1ed660u;

    // 0x1ed660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ed664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed668: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x1ED668u;
    SET_GPR_U32(ctx, 31, 0x1ED670u);
    ctx->pc = 0x1ED66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED668u;
    // 0x1ed66c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x1ED668u, 0x1ED670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED670u;
label_1ed670:
    // 0x1ed670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed674: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED674u;
        // 0x1ed678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED67Cu;
    // 0x1ed67c: 0x0  nop
    ctx->pc = 0x1ed67cu;
    // NOP
    ctx->pc = 0x1ed680u;
}
