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

// Function: IsStateByteIdle_10B5F0
// Address: 0x10b5f0 - 0x10b620
void IsStateByteIdle_10B5F0_0x10b5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsStateByteIdle_10B5F0_0x10b5f0");
#endif

    ctx->pc = 0x10b5f0u;

    // 0x10b5f0: 0x908202f4  lbu         $v0, 0x2F4($a0)
    ctx->pc = 0x10b5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x10b5f4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B5F4u;
    {
        const bool branch_taken_0x10b5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b5f4) {
            ctx->pc = 0x10B5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B5F4u;
            // 0x10b5f8: 0x908402f5  lbu         $a0, 0x2F5($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B604u;
            goto label_10b604;
        }
    }
    ctx->pc = 0x10B5FCu;
    // 0x10b5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x10B5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5FCu;
        // 0x10b600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B604u;
label_10b604:
    // 0x10b604: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B604u;
    {
        const bool branch_taken_0x10b604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B604u;
        // 0x10b608: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b604) {
            ctx->pc = 0x10B614u;
            goto label_10b614;
        }
    }
    ctx->pc = 0x10B60Cu;
    // 0x10b60c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B60Cu;
    {
        const bool branch_taken_0x10b60c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B60Cu;
        // 0x10b610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b60c) {
            ctx->pc = 0x10B618u;
            goto label_10b618;
        }
    }
    ctx->pc = 0x10B614u;
label_10b614:
    // 0x10b614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b618:
    // 0x10b618: 0x3e00008  jr          $ra
    ctx->pc = 0x10B618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B620u;
}
