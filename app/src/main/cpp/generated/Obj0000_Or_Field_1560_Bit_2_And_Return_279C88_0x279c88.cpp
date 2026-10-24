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

// Function: Obj0000_Or_Field_1560_Bit_2_And_Return_279C88
// Address: 0x279c88 - 0x279c98
void Obj0000_Or_Field_1560_Bit_2_And_Return_279C88_0x279c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Or_Field_1560_Bit_2_And_Return_279C88_0x279c88");
#endif

    ctx->pc = 0x279c88u;

    // 0x279c88: 0x8c821560  lw          $v0, 0x1560($a0)
    ctx->pc = 0x279c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5472)));
    // 0x279c8c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x279c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x279c90: 0x3e00008  jr          $ra
    ctx->pc = 0x279C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C90u;
        // 0x279c94: 0xac821560  sw          $v0, 0x1560($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279C98u;
}
