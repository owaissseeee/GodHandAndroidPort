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

// Function: func_002BEDD8
// Address: 0x2bedd8 - 0x2bede8
void func_002BEDD8_0x2bedd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BEDD8_0x2bedd8");
#endif

    ctx->pc = 0x2bedd8u;

    // 0x2bedd8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2bedd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2beddc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDDCu;
        // 0x2bede0: 0x90620008  lbu         $v0, 0x8($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEDE4u;
    // 0x2bede4: 0x0  nop
    ctx->pc = 0x2bede4u;
    // NOP
    ctx->pc = 0x2bede8u;
}
