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

// Function: cCoreSave_ckEventFlag
// Address: 0x1fc360 - 0x1fc388
void cCoreSave_ckEventFlag_0x1fc360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_ckEventFlag_0x1fc360");
#endif

    ctx->pc = 0x1fc360u;

    // 0x1fc360: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc364: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC364u;
    {
        const bool branch_taken_0x1fc364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC364u;
        // 0x1fc368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc364) {
            ctx->pc = 0x1FC380u;
            goto label_1fc380;
        }
    }
    ctx->pc = 0x1FC36Cu;
    // 0x1fc36c: 0x8c830b90  lw          $v1, 0xB90($a0)
    ctx->pc = 0x1fc36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2960)));
    // 0x1fc370: 0xa22004  sllv        $a0, $v0, $a1
    ctx->pc = 0x1fc370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fc374: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1fc374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1fc378: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC378u;
        // 0x1fc37c: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC380u;
label_1fc380:
    // 0x1fc380: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC380u;
        // 0x1fc384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC388u;
}
