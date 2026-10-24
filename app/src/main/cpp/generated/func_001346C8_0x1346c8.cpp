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

// Function: func_001346C8
// Address: 0x1346c8 - 0x1346f8
void func_001346C8_0x1346c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001346C8_0x1346c8");
#endif

    switch (ctx->pc) {
        case 0x1346d8u: goto label_1346d8;
        default: break;
    }

    ctx->pc = 0x1346c8u;

    // 0x1346c8: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1346C8u;
    {
        const bool branch_taken_0x1346c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1346c8) {
            ctx->pc = 0x1346CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1346C8u;
            // 0x1346cc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1346D8u;
            goto label_1346d8;
        }
    }
    ctx->pc = 0x1346D0u;
    // 0x1346d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1346D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1346D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346D0u;
        // 0x1346d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1346D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1346D8u;
label_1346d8:
    // 0x1346d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1346D8u;
    {
        const bool branch_taken_0x1346d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1346d8) {
            ctx->pc = 0x1346F0u;
            goto label_1346f0;
        }
    }
    ctx->pc = 0x1346E0u;
    // 0x1346e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1346e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1346e4: 0x0  nop
    ctx->pc = 0x1346e4u;
    // NOP
    // 0x1346e8: 0x5445fffb  bnel        $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1346E8u;
    {
        const bool branch_taken_0x1346e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1346e8) {
            ctx->pc = 0x1346ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1346E8u;
            // 0x1346ec: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1346D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1346d8;
        }
    }
    ctx->pc = 0x1346F0u;
label_1346f0:
    // 0x1346f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1346F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1346F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346F0u;
        // 0x1346f4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1346F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1346F8u;
}
