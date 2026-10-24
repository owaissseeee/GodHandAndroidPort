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

// Function: _DelayThreadHandler
// Address: 0x3b0d20 - 0x3b0d48
void ps2__DelayThreadHandler_0x3b0d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DelayThreadHandler_0x3b0d20");
#endif

    switch (ctx->pc) {
        case 0x3b0d30u: goto label_3b0d30;
        default: break;
    }

    ctx->pc = 0x3b0d20u;

    // 0x3b0d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b0d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b0d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b0d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b0d28: 0xc0ebf34  jal         func_3AFCD0
    ctx->pc = 0x3B0D28u;
    SET_GPR_U32(ctx, 31, 0x3B0D30u);
    ctx->pc = 0x3B0D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D28u;
    // 0x3b0d2c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCD0u, 0x3B0D28u, 0x3B0D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D30u;
label_3b0d30:
    // 0x3b0d30: 0xf  sync
    ctx->pc = 0x3b0d30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b0d34: 0x42000038  ei
    ctx->pc = 0x3b0d34u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3b0d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b0d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0d3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b0d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0d40: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D40u;
        // 0x3b0d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0D48u;
}
