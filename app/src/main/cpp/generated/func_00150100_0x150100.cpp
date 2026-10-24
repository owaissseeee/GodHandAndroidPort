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

// Function: func_00150100
// Address: 0x150100 - 0x150128
void func_00150100_0x150100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00150100_0x150100");
#endif

    switch (ctx->pc) {
        case 0x150118u: goto label_150118;
        default: break;
    }

    ctx->pc = 0x150100u;

    // 0x150100: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x150100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150104: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150108: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x150108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x15010c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15010cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150110: 0xc05416a  jal         func_1505A8
    ctx->pc = 0x150110u;
    SET_GPR_U32(ctx, 31, 0x150118u);
    ctx->pc = 0x150114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150110u;
    // 0x150114: 0x24846470  addiu       $a0, $a0, 0x6470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1505A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1505A8u, 0x150110u, 0x150118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150118u;
label_150118:
    // 0x150118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15011c: 0x3e00008  jr          $ra
    ctx->pc = 0x15011Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15011Cu;
        // 0x150120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15011Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150124u;
    // 0x150124: 0x0  nop
    ctx->pc = 0x150124u;
    // NOP
    ctx->pc = 0x150128u;
}
