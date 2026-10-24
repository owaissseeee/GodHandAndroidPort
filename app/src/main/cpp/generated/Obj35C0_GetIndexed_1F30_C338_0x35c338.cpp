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

// Function: Obj35C0_GetIndexed_1F30_C338
// Address: 0x35c338 - 0x35c350
void Obj35C0_GetIndexed_1F30_C338_0x35c338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35C0_GetIndexed_1F30_C338_0x35c338");
#endif

    ctx->pc = 0x35c338u;

    // 0x35c338: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x35c338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x35c33c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35c340: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c344: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x35c344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x35c348: 0x3e00008  jr          $ra
    ctx->pc = 0x35C348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C348u;
        // 0x35c34c: 0x8c821f30  lw          $v0, 0x1F30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7984)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C350u;
}
