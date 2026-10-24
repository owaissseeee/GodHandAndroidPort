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

// Function: func_00152428
// Address: 0x152428 - 0x152448
void func_00152428_0x152428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00152428_0x152428");
#endif

    switch (ctx->pc) {
        case 0x15243cu: goto label_15243c;
        default: break;
    }

    ctx->pc = 0x152428u;

    // 0x152428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15242c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15242cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152434: 0xc0548fe  jal         func_1523F8
    ctx->pc = 0x152434u;
    SET_GPR_U32(ctx, 31, 0x15243Cu);
    ctx->pc = 0x152438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152434u;
    // 0x152438: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1523F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523F8u, 0x152434u, 0x15243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15243Cu;
label_15243c:
    // 0x15243c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15243cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152440: 0x3e00008  jr          $ra
    ctx->pc = 0x152440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152440u;
        // 0x152444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152448u;
}
