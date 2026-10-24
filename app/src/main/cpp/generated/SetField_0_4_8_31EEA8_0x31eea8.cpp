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

// Function: SetField_0_4_8_31EEA8
// Address: 0x31eea8 - 0x31eec8
void SetField_0_4_8_31EEA8_0x31eea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField_0_4_8_31EEA8_0x31eea8");
#endif

    ctx->pc = 0x31eea8u;

    // 0x31eea8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31EEA8u;
    {
        const bool branch_taken_0x31eea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEA8u;
        // 0x31eeac: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eea8) {
            ctx->pc = 0x31EEC0u;
            goto label_31eec0;
        }
    }
    ctx->pc = 0x31EEB0u;
    // 0x31eeb0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x31eeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x31eeb4: 0x24420fd8  addiu       $v0, $v0, 0xFD8
    ctx->pc = 0x31eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
    // 0x31eeb8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31eebc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x31eebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_31eec0:
    // 0x31eec0: 0x3e00008  jr          $ra
    ctx->pc = 0x31EEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EEC8u;
}
