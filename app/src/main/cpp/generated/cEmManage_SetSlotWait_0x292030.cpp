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

// Function: cEmManage_SetSlotWait
// Address: 0x292030 - 0x292048
void cEmManage_SetSlotWait_0x292030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_SetSlotWait_0x292030");
#endif

    ctx->pc = 0x292030u;

    // 0x292030: 0x8c820514  lw          $v0, 0x514($a0)
    ctx->pc = 0x292030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1300)));
    // 0x292034: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x292034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x292038: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x292038u;
    {
        const bool branch_taken_0x292038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292038) {
            ctx->pc = 0x29203Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292038u;
            // 0x29203c: 0xac850514  sw          $a1, 0x514($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 1300), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292040u;
            goto label_292040;
        }
    }
    ctx->pc = 0x292040u;
label_292040:
    // 0x292040: 0x3e00008  jr          $ra
    ctx->pc = 0x292040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292048u;
}
