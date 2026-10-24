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

// Function: cCoreSave_getBlock180
// Address: 0x1f9ff0 - 0x1fa010
void cCoreSave_getBlock180_0x1f9ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getBlock180_0x1f9ff0");
#endif

    ctx->pc = 0x1f9ff0u;

    // 0x1f9ff0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9ff4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9FF4u;
    {
        const bool branch_taken_0x1f9ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FF4u;
        // 0x1f9ff8: 0x24420180  addiu       $v0, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ff4) {
            ctx->pc = 0x1FA004u;
            goto label_1fa004;
        }
    }
    ctx->pc = 0x1F9FFCu;
    // 0x1f9ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FFCu;
        // 0x1fa000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA004u;
label_1fa004:
    // 0x1fa004: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA00Cu;
    // 0x1fa00c: 0x0  nop
    ctx->pc = 0x1fa00cu;
    // NOP
    ctx->pc = 0x1fa010u;
}
