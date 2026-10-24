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

// Function: func_002F6CD0
// Address: 0x2f6cd0 - 0x2f6cf8
void func_002F6CD0_0x2f6cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F6CD0_0x2f6cd0");
#endif

    switch (ctx->pc) {
        case 0x2f6cecu: goto label_2f6cec;
        default: break;
    }

    ctx->pc = 0x2f6cd0u;

    // 0x2f6cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f6cd4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2f6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2f6cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f6cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f6cdc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2f6cdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ce0: 0x2442f598  addiu       $v0, $v0, -0xA68
    ctx->pc = 0x2f6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964632));
    // 0x2f6ce4: 0xc0bef8a  jal         func_2FBE28
    ctx->pc = 0x2F6CE4u;
    SET_GPR_U32(ctx, 31, 0x2F6CECu);
    ctx->pc = 0x2F6CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CE4u;
    // 0x2f6ce8: 0xac6200f0  sw          $v0, 0xF0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE28u, 0x2F6CE4u, 0x2F6CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CECu;
label_2f6cec:
    // 0x2f6cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CF0u;
        // 0x2f6cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6CF8u;
}
