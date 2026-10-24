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

// Function: func_0031FAC8
// Address: 0x31fac8 - 0x31fae8
void func_0031FAC8_0x31fac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FAC8_0x31fac8");
#endif

    ctx->pc = 0x31fac8u;

    // 0x31fac8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FAC8u;
    {
        const bool branch_taken_0x31fac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAC8u;
        // 0x31facc: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fac8) {
            ctx->pc = 0x31FADCu;
            goto label_31fadc;
        }
    }
    ctx->pc = 0x31FAD0u;
    // 0x31fad0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31fad4: 0x24421158  addiu       $v0, $v0, 0x1158
    ctx->pc = 0x31fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4440));
    // 0x31fad8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x31fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_31fadc:
    // 0x31fadc: 0x3e00008  jr          $ra
    ctx->pc = 0x31FADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FAE4u;
    // 0x31fae4: 0x0  nop
    ctx->pc = 0x31fae4u;
    // NOP
    ctx->pc = 0x31fae8u;
}
