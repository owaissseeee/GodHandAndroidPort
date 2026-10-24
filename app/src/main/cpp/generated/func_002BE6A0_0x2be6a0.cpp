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

// Function: func_002BE6A0
// Address: 0x2be6a0 - 0x2be6c8
void func_002BE6A0_0x2be6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BE6A0_0x2be6a0");
#endif

    switch (ctx->pc) {
        case 0x2be6b4u: goto label_2be6b4;
        default: break;
    }

    ctx->pc = 0x2be6a0u;

    // 0x2be6a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be6a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2be6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be6a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be6ac: 0xc0e5376  jal         func_394DD8
    ctx->pc = 0x2BE6ACu;
    SET_GPR_U32(ctx, 31, 0x2BE6B4u);
    ctx->pc = 0x2BE6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE6ACu;
    // 0x2be6b0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394DD8u, 0x2BE6ACu, 0x2BE6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6B4u;
label_2be6b4:
    // 0x2be6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be6b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2be6b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2be6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6BCu;
        // 0x2be6c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE6C4u;
    // 0x2be6c4: 0x0  nop
    ctx->pc = 0x2be6c4u;
    // NOP
    ctx->pc = 0x2be6c8u;
}
