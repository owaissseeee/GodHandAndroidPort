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

// Function: func_002D31E0
// Address: 0x2d31e0 - 0x2d3200
void func_002D31E0_0x2d31e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D31E0_0x2d31e0");
#endif

    switch (ctx->pc) {
        case 0x2d31f4u: goto label_2d31f4;
        default: break;
    }

    ctx->pc = 0x2d31e0u;

    // 0x2d31e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d31e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d31e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d31e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d31e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d31e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d31ec: 0xc0b4c6c  jal         func_2D31B0
    ctx->pc = 0x2D31ECu;
    SET_GPR_U32(ctx, 31, 0x2D31F4u);
    ctx->pc = 0x2D31F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D31ECu;
    // 0x2d31f0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D31B0u, 0x2D31ECu, 0x2D31F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D31F4u;
label_2d31f4:
    // 0x2d31f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d31f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d31f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D31F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D31F8u;
        // 0x2d31fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D31F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3200u;
}
