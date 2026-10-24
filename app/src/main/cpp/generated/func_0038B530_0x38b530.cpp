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

// Function: func_0038B530
// Address: 0x38b530 - 0x38b558
void func_0038B530_0x38b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038B530_0x38b530");
#endif

    switch (ctx->pc) {
        case 0x38b540u: goto label_38b540;
        default: break;
    }

    ctx->pc = 0x38b530u;

    // 0x38b530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38b534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38b534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38b538: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x38B538u;
    SET_GPR_U32(ctx, 31, 0x38B540u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x38B538u, 0x38B540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B540u;
label_38b540:
    // 0x38b540: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x38b540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38b544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38b544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b548: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x38b548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x38b54c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38b550: 0x3e00008  jr          $ra
    ctx->pc = 0x38B550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B550u;
        // 0x38b554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B558u;
}
