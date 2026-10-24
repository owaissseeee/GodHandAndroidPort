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

// Function: cEma2_ckKiss
// Address: 0x2896a0 - 0x2896b0
void cEma2_ckKiss_0x2896a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEma2_ckKiss_0x2896a0");
#endif

    ctx->pc = 0x2896a0u;

    // 0x2896a0: 0x908215b1  lbu         $v0, 0x15B1($a0)
    ctx->pc = 0x2896a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5553)));
    // 0x2896a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2896A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2896A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2896A4u;
        // 0x2896a8: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2896A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2896ACu;
    // 0x2896ac: 0x0  nop
    ctx->pc = 0x2896acu;
    // NOP
    ctx->pc = 0x2896b0u;
}
