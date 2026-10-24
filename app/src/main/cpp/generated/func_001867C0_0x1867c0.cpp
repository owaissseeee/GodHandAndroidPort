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

// Function: func_001867C0
// Address: 0x1867c0 - 0x1867e8
void func_001867C0_0x1867c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001867C0_0x1867c0");
#endif

    switch (ctx->pc) {
        case 0x1867dcu: goto label_1867dc;
        default: break;
    }

    ctx->pc = 0x1867c0u;

    // 0x1867c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1867c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1867c4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1867c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1867c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1867c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1867cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1867ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867d0: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x1867d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x1867d4: 0xc06efc0  jal         func_1BBF00
    ctx->pc = 0x1867D4u;
    SET_GPR_U32(ctx, 31, 0x1867DCu);
    ctx->pc = 0x1867D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1867D4u;
    // 0x1867d8: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF00u, 0x1867D4u, 0x1867DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1867DCu;
label_1867dc:
    // 0x1867dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1867dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1867e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1867E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1867E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867E0u;
        // 0x1867e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1867E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1867E8u;
}
