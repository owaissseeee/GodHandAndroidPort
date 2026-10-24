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

// Function: func_003A9470
// Address: 0x3a9470 - 0x3a9498
void func_003A9470_0x3a9470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A9470_0x3a9470");
#endif

    switch (ctx->pc) {
        case 0x3a9488u: goto label_3a9488;
        default: break;
    }

    ctx->pc = 0x3a9470u;

    // 0x3a9470: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a9470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a9474: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a9474u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a9478: 0x8c46a62c  lw          $a2, -0x59D4($v0)
    ctx->pc = 0x3a9478u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3a947c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a947cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a9480: 0xc0ea526  jal         func_3A9498
    ctx->pc = 0x3A9480u;
    SET_GPR_U32(ctx, 31, 0x3A9488u);
    ctx->pc = 0x3A9484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9480u;
    // 0x3a9484: 0x24c6005c  addiu       $a2, $a2, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9498u, 0x3A9480u, 0x3A9488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9488u;
label_3a9488:
    // 0x3a9488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a9488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a948c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A948Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A948Cu;
        // 0x3a9490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A948Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9494u;
    // 0x3a9494: 0x0  nop
    ctx->pc = 0x3a9494u;
    // NOP
    ctx->pc = 0x3a9498u;
}
