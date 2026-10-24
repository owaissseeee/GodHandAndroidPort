#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: quitPlay__11cEventActor
// Address: 0x7a9608 - 0x7a9668
void quitPlay__11cEventActor_0x7a9608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quitPlay__11cEventActor_0x7a9608");
#endif

    switch (ctx->pc) {
        case 0x7a9630u: goto label_7a9630;
        case 0x7a9640u: goto label_7a9640;
        default: break;
    }

    ctx->pc = 0x7a9608u;

    // 0x7a9608: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7a9608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7a960c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7a960cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7a9610: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7a9610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7a9614: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7a9614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7a9618: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7a9618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a961c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7a961cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7a9620: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7a9620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7a9624: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7A9624u;
    {
        const bool branch_taken_0x7a9624 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7A9628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9624u;
        // 0x7a9628: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9624) {
            ctx->pc = 0x7A9650u;
            goto label_7a9650;
        }
    }
    ctx->pc = 0x7A962Cu;
    // 0x7a962c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x7a962cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a9630:
    // 0x7a9630: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x7a9630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7a9634: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x7a9634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x7a9638: 0xc1eada2  jal         func_7AB688
    ctx->pc = 0x7A9638u;
    SET_GPR_U32(ctx, 31, 0x7A9640u);
    ctx->pc = 0x7A963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A9638u;
    // 0x7a963c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AB688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AB688u, 0x7A9638u, 0x7A9640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9640u;
label_7a9640:
    // 0x7a9640: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7a9640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7a9644: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x7a9644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7a9648: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7A9648u;
    {
        const bool branch_taken_0x7a9648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9648u;
        // 0x7a964c: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9648) {
            ctx->pc = 0x7A9630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a9630;
        }
    }
    ctx->pc = 0x7A9650u;
label_7a9650:
    // 0x7a9650: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7a9650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7a9654: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7a9654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7a9658: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7a9658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7a965c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7a965cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7a9660: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9660u;
        // 0x7a9664: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A9668u;
}
} // namespace gh_event
