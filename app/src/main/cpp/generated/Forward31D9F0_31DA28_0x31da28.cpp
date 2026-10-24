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

// Function: Forward31D9F0_31DA28
// Address: 0x31da28 - 0x31da48
void Forward31D9F0_31DA28_0x31da28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward31D9F0_31DA28_0x31da28");
#endif

    switch (ctx->pc) {
        case 0x31da3cu: goto label_31da3c;
        default: break;
    }

    ctx->pc = 0x31da28u;

    // 0x31da28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31da28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31da2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31da30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31da30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31da34: 0xc0c767c  jal         func_31D9F0
    ctx->pc = 0x31DA34u;
    SET_GPR_U32(ctx, 31, 0x31DA3Cu);
    ctx->pc = 0x31DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DA34u;
    // 0x31da38: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D9F0u, 0x31DA34u, 0x31DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DA3Cu;
label_31da3c:
    // 0x31da3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31da3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31da40: 0x3e00008  jr          $ra
    ctx->pc = 0x31DA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA40u;
        // 0x31da44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DA48u;
}
