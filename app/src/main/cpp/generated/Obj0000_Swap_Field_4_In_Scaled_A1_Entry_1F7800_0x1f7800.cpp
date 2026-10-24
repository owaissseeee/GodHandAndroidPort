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

// Function: Obj0000_Swap_Field_4_In_Scaled_A1_Entry_1F7800
// Address: 0x1f7800 - 0x1f7820
void Obj0000_Swap_Field_4_In_Scaled_A1_Entry_1F7800_0x1f7800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Swap_Field_4_In_Scaled_A1_Entry_1F7800_0x1f7800");
#endif

    ctx->pc = 0x1f7800u;

    // 0x1f7800: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1f7800u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1f7804: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1f7804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1f7808: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f7808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1f780c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1f780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f7810: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1f7810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1f7814: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7814u;
        // 0x1f7818: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F781Cu;
    // 0x1f781c: 0x0  nop
    ctx->pc = 0x1f781cu;
    // NOP
    ctx->pc = 0x1f7820u;
}
