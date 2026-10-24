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

// Function: func_00355408
// Address: 0x355408 - 0x355450
void func_00355408_0x355408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00355408_0x355408");
#endif

    switch (ctx->pc) {
        case 0x355420u: goto label_355420;
        default: break;
    }

    ctx->pc = 0x355408u;

    // 0x355408: 0x8c821fc0  lw          $v0, 0x1FC0($a0)
    ctx->pc = 0x355408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x35540c: 0x248416b0  addiu       $a0, $a0, 0x16B0
    ctx->pc = 0x35540cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5808));
    // 0x355410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x355410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355414: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x355414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x355418: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x355418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x35541c: 0x0  nop
    ctx->pc = 0x35541cu;
    // NOP
label_355420:
    // 0x355420: 0x24840088  addiu       $a0, $a0, 0x88
    ctx->pc = 0x355420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
    // 0x355424: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x355424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355428: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x355428u;
    {
        const bool branch_taken_0x355428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x35542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355428u;
        // 0x35542c: 0x24c600f0  addiu       $a2, $a2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355428) {
            ctx->pc = 0x355448u;
            goto label_355448;
        }
    }
    ctx->pc = 0x355430u;
    // 0x355430: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x355430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x355434: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x355434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x355438: 0x0  nop
    ctx->pc = 0x355438u;
    // NOP
    // 0x35543c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x35543Cu;
    {
        const bool branch_taken_0x35543c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x355440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35543Cu;
        // 0x355440: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35543c) {
            ctx->pc = 0x355420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355420;
        }
    }
    ctx->pc = 0x355444u;
    // 0x355444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355448:
    // 0x355448: 0x3e00008  jr          $ra
    ctx->pc = 0x355448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355450u;
}
