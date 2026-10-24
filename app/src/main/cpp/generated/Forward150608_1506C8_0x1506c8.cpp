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

// Function: Forward150608_1506C8
// Address: 0x1506c8 - 0x1506f0
void Forward150608_1506C8_0x1506c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward150608_1506C8_0x1506c8");
#endif

    switch (ctx->pc) {
        case 0x1506dcu: goto label_1506dc;
        default: break;
    }

    ctx->pc = 0x1506c8u;

    // 0x1506c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1506c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1506cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1506ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1506d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1506d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1506d4: 0xc054182  jal         func_150608
    ctx->pc = 0x1506D4u;
    SET_GPR_U32(ctx, 31, 0x1506DCu);
    ctx->pc = 0x1506D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1506D4u;
    // 0x1506d8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x150608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150608u, 0x1506D4u, 0x1506DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506DCu;
label_1506dc:
    // 0x1506dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1506dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1506e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1506E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1506E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506E0u;
        // 0x1506e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1506E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1506E8u;
    // 0x1506e8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1506e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1506ec: 0x0  nop
    ctx->pc = 0x1506ecu;
    // NOP
    ctx->pc = 0x1506f0u;
}
