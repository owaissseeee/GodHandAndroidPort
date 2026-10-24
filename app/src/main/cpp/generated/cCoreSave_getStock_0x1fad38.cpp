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

// Function: cCoreSave_getStock
// Address: 0x1fad38 - 0x1fad58
void cCoreSave_getStock_0x1fad38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getStock_0x1fad38");
#endif

    ctx->pc = 0x1fad38u;

    // 0x1fad38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fad38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fad3c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAD3Cu;
    {
        const bool branch_taken_0x1fad3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD3Cu;
        // 0x1fad40: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad3c) {
            ctx->pc = 0x1FAD4Cu;
            goto label_1fad4c;
        }
    }
    ctx->pc = 0x1FAD44u;
    // 0x1fad44: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD44u;
        // 0x1fad48: 0x90620134  lbu         $v0, 0x134($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAD4Cu;
label_1fad4c:
    // 0x1fad4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD4Cu;
        // 0x1fad50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAD54u;
    // 0x1fad54: 0x0  nop
    ctx->pc = 0x1fad54u;
    // NOP
    ctx->pc = 0x1fad58u;
}
