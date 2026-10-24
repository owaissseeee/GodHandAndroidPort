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

// Function: func_00345828
// Address: 0x345828 - 0x345848
void func_00345828_0x345828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345828_0x345828");
#endif

    switch (ctx->pc) {
        case 0x345838u: goto label_345838;
        default: break;
    }

    ctx->pc = 0x345828u;

    // 0x345828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34582c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34582cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x345830: 0xc0d3726  jal         func_34DC98
    ctx->pc = 0x345830u;
    SET_GPR_U32(ctx, 31, 0x345838u);
    ctx->pc = 0x34DC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DC98u, 0x345830u, 0x345838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345838u;
label_345838:
    // 0x345838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34583c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34583cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345840: 0x3e00008  jr          $ra
    ctx->pc = 0x345840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345840u;
        // 0x345844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345848u;
}
