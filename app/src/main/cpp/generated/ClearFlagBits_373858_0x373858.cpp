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

// Function: ClearFlagBits_373858
// Address: 0x373858 - 0x3738a0
void ClearFlagBits_373858_0x373858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearFlagBits_373858_0x373858");
#endif

    switch (ctx->pc) {
        case 0x373874u: goto label_373874;
        default: break;
    }

    ctx->pc = 0x373858u;

    // 0x373858: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x373858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37385c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37385cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x373860: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x373860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37386c: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x37386Cu;
    SET_GPR_U32(ctx, 31, 0x373874u);
    ctx->pc = 0x373870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37386Cu;
    // 0x373870: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x37386Cu, 0x373874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373874u;
label_373874:
    // 0x373874: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x373874u;
    {
        const bool branch_taken_0x373874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x373878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373874u;
        // 0x373878: 0x111827  nor         $v1, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373874) {
            ctx->pc = 0x373888u;
            goto label_373888;
        }
    }
    ctx->pc = 0x37387Cu;
    // 0x37387c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x37387cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x373880: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x373880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x373884: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x373884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_373888:
    // 0x373888: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x373888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37388c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37388cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373894: 0x3e00008  jr          $ra
    ctx->pc = 0x373894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373894u;
        // 0x373898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37389Cu;
    // 0x37389c: 0x0  nop
    ctx->pc = 0x37389cu;
    // NOP
    ctx->pc = 0x3738a0u;
}
