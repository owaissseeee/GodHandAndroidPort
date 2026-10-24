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
// Function: isEndMessage__13cEventMessage
// Address: 0x7b0260 - 0x7b02a0
void isEndMessage__13cEventMessage_0x7b0260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isEndMessage__13cEventMessage_0x7b0260");
#endif

    switch (ctx->pc) {
        case 0x7b0284u: goto label_7b0284;
        default: break;
    }

    ctx->pc = 0x7b0260u;

    // 0x7b0260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b0260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b0264: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x7b0264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7b0268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b0268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b026c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x7b026cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7b0270: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7B0270u;
    {
        const bool branch_taken_0x7b0270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x7B0274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0270u;
        // 0x7b0274: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0270) {
            ctx->pc = 0x7B028Cu;
            goto label_7b028c;
        }
    }
    ctx->pc = 0x7B0278u;
    // 0x7b0278: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x7b0278u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x7b027c: 0xc0abb44  jal         func_2AED10
    ctx->pc = 0x7B027Cu;
    SET_GPR_U32(ctx, 31, 0x7B0284u);
    ctx->pc = 0x7B0280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B027Cu;
    // 0x7b0280: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AED10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AED10u, 0x7B027Cu, 0x7B0284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0284u;
label_7b0284:
    // 0x7b0284: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7B0284u;
    {
        const bool branch_taken_0x7b0284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0284u;
        // 0x7b0288: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0284) {
            ctx->pc = 0x7B0290u;
            goto label_7b0290;
        }
    }
    ctx->pc = 0x7B028Cu;
label_7b028c:
    // 0x7b028c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7b028cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7b0290:
    // 0x7b0290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b0290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b0294: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0294u;
        // 0x7b0298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B029Cu;
    // 0x7b029c: 0x0  nop
    ctx->pc = 0x7b029cu;
    // NOP
    ctx->pc = 0x7b02a0u;
}
} // namespace gh_event
