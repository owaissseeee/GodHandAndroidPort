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

// Function: func_002F1B40
// Address: 0x2f1b40 - 0x2f1b60
void func_002F1B40_0x2f1b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F1B40_0x2f1b40");
#endif

    switch (ctx->pc) {
        case 0x2f1b54u: goto label_2f1b54;
        default: break;
    }

    ctx->pc = 0x2f1b40u;

    // 0x2f1b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f1b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f1b44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f1b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f1b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f1b4c: 0xc0bc6a8  jal         func_2F1AA0
    ctx->pc = 0x2F1B4Cu;
    SET_GPR_U32(ctx, 31, 0x2F1B54u);
    ctx->pc = 0x2F1B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1B4Cu;
    // 0x2f1b50: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1AA0u, 0x2F1B4Cu, 0x2F1B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1B54u;
label_2f1b54:
    // 0x2f1b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f1b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1b58: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B58u;
        // 0x2f1b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1B60u;
}
