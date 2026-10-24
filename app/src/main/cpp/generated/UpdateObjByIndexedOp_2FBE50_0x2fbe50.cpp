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

// Function: UpdateObjByIndexedOp_2FBE50
// Address: 0x2fbe50 - 0x2fbe88
void UpdateObjByIndexedOp_2FBE50_0x2fbe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateObjByIndexedOp_2FBE50_0x2fbe50");
#endif

    switch (ctx->pc) {
        case 0x2fbe64u: goto label_2fbe64;
        case 0x2fbe70u: goto label_2fbe70;
        case 0x2fbe78u: goto label_2fbe78;
        default: break;
    }

    ctx->pc = 0x2fbe50u;

    // 0x2fbe50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fbe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fbe54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fbe54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fbe58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fbe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fbe5c: 0xc0ad794  jal         func_2B5E50
    ctx->pc = 0x2FBE5Cu;
    SET_GPR_U32(ctx, 31, 0x2FBE64u);
    ctx->pc = 0x2FBE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE5Cu;
    // 0x2fbe60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E50u, 0x2FBE5Cu, 0x2FBE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE64u;
label_2fbe64:
    // 0x2fbe64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fbe64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe68: 0xc0ad73c  jal         func_2B5CF0
    ctx->pc = 0x2FBE68u;
    SET_GPR_U32(ctx, 31, 0x2FBE70u);
    ctx->pc = 0x2FBE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE68u;
    // 0x2fbe6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5CF0u, 0x2FBE68u, 0x2FBE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE70u;
label_2fbe70:
    // 0x2fbe70: 0xc0bec08  jal         func_2FB020
    ctx->pc = 0x2FBE70u;
    SET_GPR_U32(ctx, 31, 0x2FBE78u);
    ctx->pc = 0x2FBE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE70u;
    // 0x2fbe74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB020u, 0x2FBE70u, 0x2FBE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE78u;
label_2fbe78:
    // 0x2fbe78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fbe78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbe7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fbe7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fbe80: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE80u;
        // 0x2fbe84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBE88u;
}
