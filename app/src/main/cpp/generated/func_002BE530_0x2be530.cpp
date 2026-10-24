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

// Function: func_002BE530
// Address: 0x2be530 - 0x2be550
void func_002BE530_0x2be530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BE530_0x2be530");
#endif

    switch (ctx->pc) {
        case 0x2be544u: goto label_2be544;
        default: break;
    }

    ctx->pc = 0x2be530u;

    // 0x2be530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be534: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2be534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be53c: 0xc0af944  jal         func_2BE510
    ctx->pc = 0x2BE53Cu;
    SET_GPR_U32(ctx, 31, 0x2BE544u);
    ctx->pc = 0x2BE540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE53Cu;
    // 0x2be540: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE510u, 0x2BE53Cu, 0x2BE544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE544u;
label_2be544:
    // 0x2be544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be548: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE548u;
        // 0x2be54c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE550u;
}
