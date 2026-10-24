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

// Function: cDvd_CheckWaitFrame
// Address: 0x201108 - 0x201160
void cDvd_CheckWaitFrame_0x201108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDvd_CheckWaitFrame_0x201108");
#endif

    switch (ctx->pc) {
        case 0x201128u: goto label_201128;
        case 0x201130u: goto label_201130;
        case 0x20113cu: goto label_20113c;
        case 0x20114cu: goto label_20114c;
        default: break;
    }

    ctx->pc = 0x201108u;

    // 0x201108: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20110c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20110cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x201110: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x201114: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x201114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20111c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20111Cu;
    {
        const bool branch_taken_0x20111c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20111Cu;
        // 0x201120: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20111c) {
            ctx->pc = 0x201130u;
            goto label_201130;
        }
    }
    ctx->pc = 0x201124u;
    // 0x201124: 0x0  nop
    ctx->pc = 0x201124u;
    // NOP
label_201128:
    // 0x201128: 0xc0b5494  jal         func_2D5250
    ctx->pc = 0x201128u;
    SET_GPR_U32(ctx, 31, 0x201130u);
    ctx->pc = 0x20112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201128u;
    // 0x20112c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5250u, 0x201128u, 0x201130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201130u;
label_201130:
    // 0x201130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201134: 0xc080426  jal         func_201098
    ctx->pc = 0x201134u;
    SET_GPR_U32(ctx, 31, 0x20113Cu);
    ctx->pc = 0x201138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201134u;
    // 0x201138: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201098u, 0x201134u, 0x20113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20113Cu;
label_20113c:
    // 0x20113c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20113Cu;
    {
        const bool branch_taken_0x20113c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20113c) {
            ctx->pc = 0x201128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201128;
        }
    }
    ctx->pc = 0x201144u;
    // 0x201144: 0xc0b5494  jal         func_2D5250
    ctx->pc = 0x201144u;
    SET_GPR_U32(ctx, 31, 0x20114Cu);
    ctx->pc = 0x201148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201144u;
    // 0x201148: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5250u, 0x201144u, 0x20114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20114Cu;
label_20114c:
    // 0x20114c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20114cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201150: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201158: 0x3e00008  jr          $ra
    ctx->pc = 0x201158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201158u;
        // 0x20115c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201160u;
}
