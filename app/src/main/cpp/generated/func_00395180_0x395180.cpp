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

// Function: func_00395180
// Address: 0x395180 - 0x3951b0
void func_00395180_0x395180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00395180_0x395180");
#endif

    switch (ctx->pc) {
        case 0x395190u: goto label_395190;
        case 0x395198u: goto label_395198;
        default: break;
    }

    ctx->pc = 0x395180u;

    // 0x395180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x395184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x395184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x395188: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x395188u;
    SET_GPR_U32(ctx, 31, 0x395190u);
    ctx->pc = 0x39518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395188u;
    // 0x39518c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x395188u, 0x395190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395190u;
label_395190:
    // 0x395190: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x395190u;
    SET_GPR_U32(ctx, 31, 0x395198u);
    ctx->pc = 0x395194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395190u;
    // 0x395194: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x395190u, 0x395198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395198u;
label_395198:
    // 0x395198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39519c: 0x3e00008  jr          $ra
    ctx->pc = 0x39519Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3951A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39519Cu;
        // 0x3951a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39519Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3951A4u;
    // 0x3951a4: 0x0  nop
    ctx->pc = 0x3951a4u;
    // NOP
    // 0x3951a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3951a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3951ac: 0x0  nop
    ctx->pc = 0x3951acu;
    // NOP
    ctx->pc = 0x3951b0u;
}
