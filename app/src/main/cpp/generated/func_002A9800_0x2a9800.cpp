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

// Function: func_002A9800
// Address: 0x2a9800 - 0x2a9860
void func_002A9800_0x2a9800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A9800_0x2a9800");
#endif

    ctx->pc = 0x2a9800u;

    // 0x2a9800: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A9800u;
    {
        const bool branch_taken_0x2a9800 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9800) {
            ctx->pc = 0x2A9854u;
            goto label_2a9854;
        }
    }
    ctx->pc = 0x2A9808u;
    // 0x2a9808: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a9808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a980c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2a980cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a9810: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a9810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a9814: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9814u;
    {
        const bool branch_taken_0x2a9814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9814u;
        // 0x2a9818: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9814) {
            ctx->pc = 0x2A9824u;
            goto label_2a9824;
        }
    }
    ctx->pc = 0x2A981Cu;
    // 0x2a981c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A981Cu;
    {
        const bool branch_taken_0x2a981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A981Cu;
        // 0x2a9820: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a981c) {
            ctx->pc = 0x2A9828u;
            goto label_2a9828;
        }
    }
    ctx->pc = 0x2A9824u;
label_2a9824:
    // 0x2a9824: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2a9824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_2a9828:
    // 0x2a9828: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2a9828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a982c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A982Cu;
    {
        const bool branch_taken_0x2a982c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a982c) {
            ctx->pc = 0x2A9830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A982Cu;
            // 0x2a9830: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9840u;
            goto label_2a9840;
        }
    }
    ctx->pc = 0x2A9834u;
    // 0x2a9834: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a9834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a9838: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a9838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a983c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2a983cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2a9840:
    // 0x2a9840: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2a9840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a9844: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9844u;
    {
        const bool branch_taken_0x2a9844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9844u;
        // 0x2a9848: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9844) {
            ctx->pc = 0x2A9850u;
            goto label_2a9850;
        }
    }
    ctx->pc = 0x2A984Cu;
    // 0x2a984c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2a984cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_2a9850:
    // 0x2a9850: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x2a9850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
label_2a9854:
    // 0x2a9854: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A985Cu;
    // 0x2a985c: 0x0  nop
    ctx->pc = 0x2a985cu;
    // NOP
    ctx->pc = 0x2a9860u;
}
