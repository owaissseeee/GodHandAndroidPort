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

// Function: func_0027AC50
// Address: 0x27ac50 - 0x27ac70
void func_0027AC50_0x27ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027AC50_0x27ac50");
#endif

    switch (ctx->pc) {
        case 0x27ac64u: goto label_27ac64;
        default: break;
    }

    ctx->pc = 0x27ac50u;

    // 0x27ac50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27ac54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27ac54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ac58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27ac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27ac5c: 0xc09e9fc  jal         func_27A7F0
    ctx->pc = 0x27AC5Cu;
    SET_GPR_U32(ctx, 31, 0x27AC64u);
    ctx->pc = 0x27AC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AC5Cu;
    // 0x27ac60: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A7F0u, 0x27AC5Cu, 0x27AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC64u;
label_27ac64:
    // 0x27ac64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ac64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ac68: 0x3e00008  jr          $ra
    ctx->pc = 0x27AC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC68u;
        // 0x27ac6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AC70u;
}
