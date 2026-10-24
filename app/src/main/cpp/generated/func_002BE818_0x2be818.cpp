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

// Function: func_002BE818
// Address: 0x2be818 - 0x2be838
void func_002BE818_0x2be818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BE818_0x2be818");
#endif

    switch (ctx->pc) {
        case 0x2be828u: goto label_2be828;
        default: break;
    }

    ctx->pc = 0x2be818u;

    // 0x2be818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be81c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be820: 0xc0afa16  jal         func_2BE858
    ctx->pc = 0x2BE820u;
    SET_GPR_U32(ctx, 31, 0x2BE828u);
    ctx->pc = 0x2BE824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE820u;
    // 0x2be824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE858u, 0x2BE820u, 0x2BE828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE828u;
label_2be828:
    // 0x2be828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be82c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE82Cu;
        // 0x2be830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE834u;
    // 0x2be834: 0x0  nop
    ctx->pc = 0x2be834u;
    // NOP
    ctx->pc = 0x2be838u;
}
