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

// Function: GetArrayElemA0C_35A1C8
// Address: 0x35a1c8 - 0x35a1e0
void GetArrayElemA0C_35A1C8_0x35a1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetArrayElemA0C_35A1C8_0x35a1c8");
#endif

    ctx->pc = 0x35a1c8u;

    // 0x35a1c8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x35a1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x35a1cc: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x35a1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x35a1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x35A1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A1D0u;
        // 0x35a1d4: 0x8ca20a0c  lw          $v0, 0xA0C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2572)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A1D8u;
    // 0x35a1d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35a1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35a1dc: 0x0  nop
    ctx->pc = 0x35a1dcu;
    // NOP
    ctx->pc = 0x35a1e0u;
}
