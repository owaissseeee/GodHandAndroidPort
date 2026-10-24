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

// Function: DIntr
// Address: 0x3b63a0 - 0x3b63f0
void DIntr_0x3b63a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DIntr_0x3b63a0");
#endif

    switch (ctx->pc) {
        case 0x3b63b8u: goto label_3b63b8;
        default: break;
    }

    ctx->pc = 0x3b63a0u;

    // 0x3b63a0: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x3b63a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x3b63a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b63a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3b63a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b63ac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3B63ACu;
    {
        const bool branch_taken_0x3b63ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B63B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B63ACu;
        // 0x3b63b0: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b63ac) {
            ctx->pc = 0x3B63E4u;
            goto label_3b63e4;
        }
    }
    ctx->pc = 0x3B63B4u;
    // 0x3b63b4: 0x0  nop
    ctx->pc = 0x3b63b4u;
    // NOP
label_3b63b8:
    // 0x3b63b8: 0x42000039  di
    ctx->pc = 0x3b63b8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3b63bc: 0x40f  sync.p
    ctx->pc = 0x3b63bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b63c0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3b63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3b63c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3b63c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3b63c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3b63c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3b63cc: 0x0  nop
    ctx->pc = 0x3b63ccu;
    // NOP
    // 0x3b63d0: 0x0  nop
    ctx->pc = 0x3b63d0u;
    // NOP
    // 0x3b63d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B63D4u;
    {
        const bool branch_taken_0x3b63d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b63d4) {
            ctx->pc = 0x3B63B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b63b8;
        }
    }
    ctx->pc = 0x3B63DCu;
    // 0x3b63dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B63DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B63DCu;
        // 0x3b63e0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B63DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B63E4u;
label_3b63e4:
    // 0x3b63e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b63e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b63e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B63E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B63ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B63E8u;
        // 0x3b63ec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B63E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B63F0u;
}
