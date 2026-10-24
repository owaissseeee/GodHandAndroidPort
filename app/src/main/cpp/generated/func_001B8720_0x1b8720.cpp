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

// Function: func_001B8720
// Address: 0x1b8720 - 0x1b8758
void func_001B8720_0x1b8720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B8720_0x1b8720");
#endif

    ctx->pc = 0x1b8720u;

    // 0x1b8720: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x1b8720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1b8724: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8728: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8728u;
    {
        const bool branch_taken_0x1b8728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8728u;
        // 0x1b872c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8728) {
            ctx->pc = 0x1B873Cu;
            goto label_1b873c;
        }
    }
    ctx->pc = 0x1B8730u;
    // 0x1b8730: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1b8730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1b8734: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8734u;
    {
        const bool branch_taken_0x1b8734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8734u;
        // 0x1b8738: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8734) {
            ctx->pc = 0x1B8740u;
            goto label_1b8740;
        }
    }
    ctx->pc = 0x1B873Cu;
label_1b873c:
    // 0x1b873c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b873cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8740:
    // 0x1b8740: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8740u;
    {
        const bool branch_taken_0x1b8740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8740) {
            ctx->pc = 0x1B8744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8740u;
            // 0x1b8744: 0x8c8200f0  lw          $v0, 0xF0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B874Cu;
            goto label_1b874c;
        }
    }
    ctx->pc = 0x1B8748u;
    // 0x1b8748: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1b8748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1b874c:
    // 0x1b874c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B874Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B874Cu;
        // 0x1b8750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B874Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8754u;
    // 0x1b8754: 0x0  nop
    ctx->pc = 0x1b8754u;
    // NOP
    ctx->pc = 0x1b8758u;
}
