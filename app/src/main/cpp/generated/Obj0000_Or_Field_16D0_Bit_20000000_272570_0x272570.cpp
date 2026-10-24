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

// Function: Obj0000_Or_Field_16D0_Bit_20000000_272570
// Address: 0x272570 - 0x272588
void Obj0000_Or_Field_16D0_Bit_20000000_272570_0x272570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Or_Field_16D0_Bit_20000000_272570_0x272570");
#endif

    ctx->pc = 0x272570u;

    // 0x272570: 0x8c8216d0  lw          $v0, 0x16D0($a0)
    ctx->pc = 0x272570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5840)));
    // 0x272574: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x272574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x272578: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x272578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27257c: 0x3e00008  jr          $ra
    ctx->pc = 0x27257Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27257Cu;
        // 0x272580: 0xac8216d0  sw          $v0, 0x16D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27257Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272584u;
    // 0x272584: 0x0  nop
    ctx->pc = 0x272584u;
    // NOP
    ctx->pc = 0x272588u;
}
