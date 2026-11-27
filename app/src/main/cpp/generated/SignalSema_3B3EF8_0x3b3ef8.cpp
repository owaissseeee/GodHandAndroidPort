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

// Function: SignalSema_3B3EF8
// Address: 0x3b3ef8 - 0x3b3f08
void SignalSema_3B3EF8_0x3b3ef8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SignalSema_3B3EF8_0x3b3ef8");
#endif


    // 0x3b3ef8: 0x3c020040  lui         $v0, 0x40
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b3efc: 0x80ebf30  j           func_3AFCC0
    ctx->pc = 0x3B3F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3EFCu;
    // 0x3b3f00: 0x8c44aee4  lw          $a0, -0x511C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946532)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3B3EFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x3b3f04: 0x0  nop
    // NOP
    ctx->pc = 0x3b3f08u;
}