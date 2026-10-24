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

// Function: cEmManage_SetBigHitEffWait
// Address: 0x292ef0 - 0x292f08
void cEmManage_SetBigHitEffWait_0x292ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_SetBigHitEffWait_0x292ef0");
#endif

    ctx->pc = 0x292ef0u;

    // 0x292ef0: 0x80820538  lb          $v0, 0x538($a0)
    ctx->pc = 0x292ef0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1336)));
    // 0x292ef4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x292ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x292ef8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x292EF8u;
    {
        const bool branch_taken_0x292ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292ef8) {
            ctx->pc = 0x292EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292EF8u;
            // 0x292efc: 0xa0850538  sb          $a1, 0x538($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 1336), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292F00u;
            goto label_292f00;
        }
    }
    ctx->pc = 0x292F00u;
label_292f00:
    // 0x292f00: 0x3e00008  jr          $ra
    ctx->pc = 0x292F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292F08u;
}
