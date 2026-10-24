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

// Function: SetSequenceFlags_373810
// Address: 0x373810 - 0x373858
void SetSequenceFlags_373810_0x373810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSequenceFlags_373810_0x373810");
#endif

    switch (ctx->pc) {
        case 0x37382cu: goto label_37382c;
        default: break;
    }

    ctx->pc = 0x373810u;

    // 0x373810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x373810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x373814: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x373814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x373818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x373818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37381c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37381cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373824: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x373824u;
    SET_GPR_U32(ctx, 31, 0x37382Cu);
    ctx->pc = 0x373828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373824u;
    // 0x373828: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x373824u, 0x37382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37382Cu;
label_37382c:
    // 0x37382c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37382Cu;
    {
        const bool branch_taken_0x37382c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37382c) {
            ctx->pc = 0x373830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37382Cu;
            // 0x373830: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373844u;
            goto label_373844;
        }
    }
    ctx->pc = 0x373834u;
    // 0x373834: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x373834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x373838: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x373838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x37383c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x37383cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x373840: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x373840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_373844:
    // 0x373844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x373844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37384c: 0x3e00008  jr          $ra
    ctx->pc = 0x37384Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37384Cu;
        // 0x373850: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37384Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373854u;
    // 0x373854: 0x0  nop
    ctx->pc = 0x373854u;
    // NOP
    ctx->pc = 0x373858u;
}
