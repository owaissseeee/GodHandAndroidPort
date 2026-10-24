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

// Function: cMessage_searchWorkId
// Address: 0x2aed10 - 0x2aed40
void cMessage_searchWorkId_0x2aed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessage_searchWorkId_0x2aed10");
#endif

    switch (ctx->pc) {
        case 0x2aed20u: goto label_2aed20;
        default: break;
    }

    ctx->pc = 0x2aed10u;

    // 0x2aed10: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2aed10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2aed14: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AED14u;
    {
        const bool branch_taken_0x2aed14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED14u;
        // 0x2aed18: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed14) {
            ctx->pc = 0x2AED38u;
            goto label_2aed38;
        }
    }
    ctx->pc = 0x2AED1Cu;
    // 0x2aed1c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2aed1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2aed20:
    // 0x2aed20: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AED20u;
    {
        const bool branch_taken_0x2aed20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2aed20) {
            ctx->pc = 0x2AED24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AED20u;
            // 0x2aed24: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AED30u;
            goto label_2aed30;
        }
    }
    ctx->pc = 0x2AED28u;
    // 0x2aed28: 0x3e00008  jr          $ra
    ctx->pc = 0x2AED28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED28u;
        // 0x2aed2c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AED28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AED30u;
label_2aed30:
    // 0x2aed30: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AED30u;
    {
        const bool branch_taken_0x2aed30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aed30) {
            ctx->pc = 0x2AED34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AED30u;
            // 0x2aed34: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AED20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aed20;
        }
    }
    ctx->pc = 0x2AED38u;
label_2aed38:
    // 0x2aed38: 0x3e00008  jr          $ra
    ctx->pc = 0x2AED38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED38u;
        // 0x2aed3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AED38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AED40u;
}
