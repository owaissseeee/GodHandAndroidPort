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

// Function: func_0039ADC0
// Address: 0x39adc0 - 0x39add0
void func_0039ADC0_0x39adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0039ADC0_0x39adc0");
#endif

    ctx->pc = 0x39adc0u;

    // 0x39adc0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x39adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39adc4: 0x3e00008  jr          $ra
    ctx->pc = 0x39ADC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADC4u;
        // 0x39adc8: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39ADC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39ADCCu;
    // 0x39adcc: 0x0  nop
    ctx->pc = 0x39adccu;
    // NOP
    ctx->pc = 0x39add0u;
}
