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

// Function: cCoreSave_setVital
// Address: 0x1fac98 - 0x1facb0
void cCoreSave_setVital_0x1fac98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setVital_0x1fac98");
#endif

    ctx->pc = 0x1fac98u;

    // 0x1fac98: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fac98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fac9c: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FAC9Cu;
    {
        const bool branch_taken_0x1fac9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fac9c) {
            ctx->pc = 0x1FACA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAC9Cu;
            // 0x1faca0: 0xac850084  sw          $a1, 0x84($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FACA4u;
            goto label_1faca4;
        }
    }
    ctx->pc = 0x1FACA4u;
label_1faca4:
    // 0x1faca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FACA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FACA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FACACu;
    // 0x1facac: 0x0  nop
    ctx->pc = 0x1facacu;
    // NOP
    ctx->pc = 0x1facb0u;
}
