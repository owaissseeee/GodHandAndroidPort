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

// Function: func_00324910
// Address: 0x324910 - 0x324930
void func_00324910_0x324910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00324910_0x324910");
#endif

    switch (ctx->pc) {
        case 0x324920u: goto label_324920;
        default: break;
    }

    ctx->pc = 0x324910u;

    // 0x324910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324918: 0xc0cabe2  jal         func_32AF88
    ctx->pc = 0x324918u;
    SET_GPR_U32(ctx, 31, 0x324920u);
    ctx->pc = 0x32AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AF88u, 0x324918u, 0x324920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324920u;
label_324920:
    // 0x324920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324924: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x324924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324928: 0x3e00008  jr          $ra
    ctx->pc = 0x324928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324928u;
        // 0x32492c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324930u;
}
