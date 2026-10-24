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

// Function: Obj293_OrByte_5A3
// Address: 0x293718 - 0x293728
void Obj293_OrByte_5A3_0x293718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj293_OrByte_5A3_0x293718");
#endif

    ctx->pc = 0x293718u;

    // 0x293718: 0x908205a3  lbu         $v0, 0x5A3($a0)
    ctx->pc = 0x293718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1443)));
    // 0x29371c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x29371cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x293720: 0x3e00008  jr          $ra
    ctx->pc = 0x293720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293720u;
        // 0x293724: 0xa08205a3  sb          $v0, 0x5A3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1443), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293728u;
}
