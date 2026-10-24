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

// Function: UpdateField78_FromField90_146F70
// Address: 0x146f70 - 0x146f90
void UpdateField78_FromField90_146F70_0x146f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateField78_FromField90_146F70_0x146f70");
#endif

    ctx->pc = 0x146f70u;

    // 0x146f70: 0x90820090  lbu         $v0, 0x90($a0)
    ctx->pc = 0x146f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x146f74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146F74u;
    {
        const bool branch_taken_0x146f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F74u;
        // 0x146f78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f74) {
            ctx->pc = 0x146F84u;
            goto label_146f84;
        }
    }
    ctx->pc = 0x146F7Cu;
    // 0x146f7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146F7Cu;
    {
        const bool branch_taken_0x146f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F7Cu;
        // 0x146f80: 0xa0800078  sb          $zero, 0x78($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f7c) {
            ctx->pc = 0x146F88u;
            goto label_146f88;
        }
    }
    ctx->pc = 0x146F84u;
label_146f84:
    // 0x146f84: 0xa0820078  sb          $v0, 0x78($a0)
    ctx->pc = 0x146f84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 2));
label_146f88:
    // 0x146f88: 0x3e00008  jr          $ra
    ctx->pc = 0x146F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F88u;
        // 0x146f8c: 0xa0800090  sb          $zero, 0x90($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 144), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146F90u;
}
