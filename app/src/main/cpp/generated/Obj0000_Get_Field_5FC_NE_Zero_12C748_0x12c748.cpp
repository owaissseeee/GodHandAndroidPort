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

// Function: Obj0000_Get_Field_5FC_NE_Zero_12C748
// Address: 0x12c748 - 0x12c758
void Obj0000_Get_Field_5FC_NE_Zero_12C748_0x12c748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_Field_5FC_NE_Zero_12C748_0x12c748");
#endif

    ctx->pc = 0x12c748u;

    // 0x12c748: 0x8c8205fc  lw          $v0, 0x5FC($a0)
    ctx->pc = 0x12c748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1532)));
    // 0x12c74c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C74Cu;
        // 0x12c750: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C754u;
    // 0x12c754: 0x0  nop
    ctx->pc = 0x12c754u;
    // NOP
    ctx->pc = 0x12c758u;
}
