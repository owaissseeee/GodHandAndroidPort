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

// Function: sceDmaGetChan
// Address: 0x397100 - 0x397128
void sceDmaGetChan_0x397100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaGetChan_0x397100");
#endif

    ctx->pc = 0x397100u;

    // 0x397100: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x397100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x397104: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x397104u;
    {
        const bool branch_taken_0x397104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397104u;
        // 0x397108: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397104) {
            ctx->pc = 0x397120u;
            goto label_397120;
        }
    }
    ctx->pc = 0x39710Cu;
    // 0x39710c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x39710cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x397110: 0x24428590  addiu       $v0, $v0, -0x7A70
    ctx->pc = 0x397110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935952));
    // 0x397114: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x397114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x397118: 0x3e00008  jr          $ra
    ctx->pc = 0x397118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397118u;
        // 0x39711c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397120u;
label_397120:
    // 0x397120: 0x3e00008  jr          $ra
    ctx->pc = 0x397120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397120u;
        // 0x397124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397128u;
}
