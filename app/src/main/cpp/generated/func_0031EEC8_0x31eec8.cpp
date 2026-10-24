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

// Function: func_0031EEC8
// Address: 0x31eec8 - 0x31eee8
void func_0031EEC8_0x31eec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031EEC8_0x31eec8");
#endif

    ctx->pc = 0x31eec8u;

    // 0x31eec8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EEC8u;
    {
        const bool branch_taken_0x31eec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEC8u;
        // 0x31eecc: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eec8) {
            ctx->pc = 0x31EEDCu;
            goto label_31eedc;
        }
    }
    ctx->pc = 0x31EED0u;
    // 0x31eed0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31eed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31eed4: 0x24420ff0  addiu       $v0, $v0, 0xFF0
    ctx->pc = 0x31eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4080));
    // 0x31eed8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x31eed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_31eedc:
    // 0x31eedc: 0x3e00008  jr          $ra
    ctx->pc = 0x31EEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EEE4u;
    // 0x31eee4: 0x0  nop
    ctx->pc = 0x31eee4u;
    // NOP
    ctx->pc = 0x31eee8u;
}
