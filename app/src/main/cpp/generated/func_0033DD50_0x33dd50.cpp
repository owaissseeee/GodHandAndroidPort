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

// Function: func_0033DD50
// Address: 0x33dd50 - 0x33dd78
void func_0033DD50_0x33dd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033DD50_0x33dd50");
#endif

    switch (ctx->pc) {
        case 0x33dd68u: goto label_33dd68;
        default: break;
    }

    ctx->pc = 0x33dd50u;

    // 0x33dd50: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33dd50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33dd54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33dd54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33dd58: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x33dd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33dd5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33dd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33dd60: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x33DD60u;
    SET_GPR_U32(ctx, 31, 0x33DD68u);
    ctx->pc = 0x33DD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DD60u;
    // 0x33dd64: 0x24a56900  addiu       $a1, $a1, 0x6900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x33DD60u, 0x33DD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DD68u;
label_33dd68:
    // 0x33dd68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33dd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33dd6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x33dd6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x33dd70: 0x3e00008  jr          $ra
    ctx->pc = 0x33DD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD70u;
        // 0x33dd74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DD78u;
}
