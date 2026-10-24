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

// Function: pl00_CkSubScreen
// Address: 0x12bab8 - 0x12baf0
void pl00_CkSubScreen_0x12bab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pl00_CkSubScreen_0x12bab8");
#endif

    switch (ctx->pc) {
        case 0x12bac4u: goto label_12bac4;
        default: break;
    }

    ctx->pc = 0x12bab8u;

    // 0x12bab8: 0x908202f4  lbu         $v0, 0x2F4($a0)
    ctx->pc = 0x12bab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x12babc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BABCu;
    {
        const bool branch_taken_0x12babc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12babc) {
            ctx->pc = 0x12BAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BABCu;
            // 0x12bac0: 0x908402f5  lbu         $a0, 0x2F5($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BACCu;
            goto label_12bacc;
        }
    }
    ctx->pc = 0x12BAC4u;
label_12bac4:
    // 0x12bac4: 0x3e00008  jr          $ra
    ctx->pc = 0x12BAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAC4u;
        // 0x12bac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BACCu;
label_12bacc:
    // 0x12bacc: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x12baccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12bad0: 0x0  nop
    ctx->pc = 0x12bad0u;
    // NOP
    // 0x12bad4: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12BAD4u;
    {
        const bool branch_taken_0x12bad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bad4) {
            ctx->pc = 0x12BAC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bac4;
        }
    }
    ctx->pc = 0x12BADCu;
    // 0x12badc: 0x480fff9  bltz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12BADCu;
    {
        const bool branch_taken_0x12badc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x12BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BADCu;
        // 0x12bae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12badc) {
            ctx->pc = 0x12BAC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bac4;
        }
    }
    ctx->pc = 0x12BAE4u;
    // 0x12bae4: 0x3e00008  jr          $ra
    ctx->pc = 0x12BAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BAECu;
    // 0x12baec: 0x0  nop
    ctx->pc = 0x12baecu;
    // NOP
    ctx->pc = 0x12baf0u;
}
