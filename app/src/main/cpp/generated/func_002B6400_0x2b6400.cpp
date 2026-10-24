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

// Function: func_002B6400
// Address: 0x2b6400 - 0x2b6420
void func_002B6400_0x2b6400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B6400_0x2b6400");
#endif

    switch (ctx->pc) {
        case 0x2b6414u: goto label_2b6414;
        default: break;
    }

    ctx->pc = 0x2b6400u;

    // 0x2b6400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6404: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b6404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b640c: 0xc0ad8dc  jal         func_2B6370
    ctx->pc = 0x2B640Cu;
    SET_GPR_U32(ctx, 31, 0x2B6414u);
    ctx->pc = 0x2B6410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B640Cu;
    // 0x2b6410: 0xa0400016  sb          $zero, 0x16($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 22), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6370u, 0x2B640Cu, 0x2B6414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6414u;
label_2b6414:
    // 0x2b6414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6418: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6418u;
        // 0x2b641c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6420u;
}
