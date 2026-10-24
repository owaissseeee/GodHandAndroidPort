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

// Function: func_002BE6C8
// Address: 0x2be6c8 - 0x2be6e8
void func_002BE6C8_0x2be6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BE6C8_0x2be6c8");
#endif

    switch (ctx->pc) {
        case 0x2be6d8u: goto label_2be6d8;
        default: break;
    }

    ctx->pc = 0x2be6c8u;

    // 0x2be6c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be6cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be6d0: 0xc0e53c8  jal         func_394F20
    ctx->pc = 0x2BE6D0u;
    SET_GPR_U32(ctx, 31, 0x2BE6D8u);
    ctx->pc = 0x2BE6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE6D0u;
    // 0x2be6d4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F20u, 0x2BE6D0u, 0x2BE6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6D8u;
label_2be6d8:
    // 0x2be6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6DCu;
        // 0x2be6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE6E4u;
    // 0x2be6e4: 0x0  nop
    ctx->pc = 0x2be6e4u;
    // NOP
    ctx->pc = 0x2be6e8u;
}
