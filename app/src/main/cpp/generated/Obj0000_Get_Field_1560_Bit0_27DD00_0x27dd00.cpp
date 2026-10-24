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

// Function: Obj0000_Get_Field_1560_Bit0_27DD00
// Address: 0x27dd00 - 0x27dd10
void Obj0000_Get_Field_1560_Bit0_27DD00_0x27dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_Field_1560_Bit0_27DD00_0x27dd00");
#endif

    ctx->pc = 0x27dd00u;

    // 0x27dd00: 0x8c821560  lw          $v0, 0x1560($a0)
    ctx->pc = 0x27dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5472)));
    // 0x27dd04: 0x3e00008  jr          $ra
    ctx->pc = 0x27DD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD04u;
        // 0x27dd08: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DD0Cu;
    // 0x27dd0c: 0x0  nop
    ctx->pc = 0x27dd0cu;
    // NOP
    ctx->pc = 0x27dd10u;
}
