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
// Function: func_007AC108
// Address: 0x7ac108 - 0x7ac158
void func_007AC108_0x7ac108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007AC108_0x7ac108");
#endif

    switch (ctx->pc) {
        case 0x7ac130u: goto label_7ac130;
        default: break;
    }

    ctx->pc = 0x7ac108u;

    // 0x7ac108: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7ac108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x7ac10c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7ac10cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac110: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x7ac110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x7ac114: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7AC114u;
    {
        const bool branch_taken_0x7ac114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC114u;
        // 0x7ac118: 0x24c70044  addiu       $a3, $a2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac114) {
            ctx->pc = 0x7AC14Cu;
            goto label_7ac14c;
        }
    }
    ctx->pc = 0x7AC11Cu;
    // 0x7ac11c: 0x94c20010  lhu         $v0, 0x10($a2)
    ctx->pc = 0x7ac11cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x7ac120: 0x94e30010  lhu         $v1, 0x10($a3)
    ctx->pc = 0x7ac120u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x7ac124: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x7AC124u;
    {
        const bool branch_taken_0x7ac124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x7AC128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC124u;
        // 0x7ac128: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac124) {
            ctx->pc = 0x7AC148u;
            goto label_7ac148;
        }
    }
    ctx->pc = 0x7AC12Cu;
    // 0x7ac12c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7ac12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_7ac130:
    // 0x7ac130: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x7ac130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x7ac134: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AC134u;
    {
        const bool branch_taken_0x7ac134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC134u;
        // 0x7ac138: 0x24e70044  addiu       $a3, $a3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac134) {
            ctx->pc = 0x7AC14Cu;
            goto label_7ac14c;
        }
    }
    ctx->pc = 0x7AC13Cu;
    // 0x7ac13c: 0x94e20010  lhu         $v0, 0x10($a3)
    ctx->pc = 0x7ac13cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x7ac140: 0x14c2fffb  bne         $a2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7AC140u;
    {
        const bool branch_taken_0x7ac140 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x7AC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC140u;
        // 0x7ac144: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac140) {
            ctx->pc = 0x7AC130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ac130;
        }
    }
    ctx->pc = 0x7AC148u;
label_7ac148:
    // 0x7ac148: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7ac148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7ac14c:
    // 0x7ac14c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7ac14cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac150: 0x3e00008  jr          $ra
    ctx->pc = 0x7AC150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC150u;
        // 0x7ac154: 0xe8100b  movn        $v0, $a3, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AC150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AC158u;
}
} // namespace gh_event
