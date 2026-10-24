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

// Function: cCoreSave_clearAllContinueNum
// Address: 0x1fc5e8 - 0x1fc600
void cCoreSave_clearAllContinueNum_0x1fc5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_clearAllContinueNum_0x1fc5e8");
#endif

    ctx->pc = 0x1fc5e8u;

    // 0x1fc5e8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc5ec: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC5ECu;
    {
        const bool branch_taken_0x1fc5ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc5ec) {
            ctx->pc = 0x1FC5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC5ECu;
            // 0x1fc5f0: 0xa4800bb8  sh          $zero, 0xBB8($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 3000), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC5F4u;
            goto label_1fc5f4;
        }
    }
    ctx->pc = 0x1FC5F4u;
label_1fc5f4:
    // 0x1fc5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC5FCu;
    // 0x1fc5fc: 0x0  nop
    ctx->pc = 0x1fc5fcu;
    // NOP
    ctx->pc = 0x1fc600u;
}
