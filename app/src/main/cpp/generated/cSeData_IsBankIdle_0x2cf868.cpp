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

// Function: cSeData_IsBankIdle
// Address: 0x2cf868 - 0x2cf888
void cSeData_IsBankIdle_0x2cf868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_IsBankIdle_0x2cf868");
#endif

    switch (ctx->pc) {
        case 0x2cf878u: goto label_2cf878;
        default: break;
    }

    ctx->pc = 0x2cf868u;

    // 0x2cf868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf86c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf870: 0xc0dd44a  jal         func_375128
    ctx->pc = 0x2CF870u;
    SET_GPR_U32(ctx, 31, 0x2CF878u);
    ctx->pc = 0x2CF874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF870u;
    // 0x2cf874: 0x8484002c  lh          $a0, 0x2C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375128u, 0x2CF870u, 0x2CF878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF878u;
label_2cf878:
    // 0x2cf878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf87c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2cf87cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2cf880: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF880u;
        // 0x2cf884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF888u;
}
