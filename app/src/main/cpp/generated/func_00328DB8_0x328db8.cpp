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

// Function: func_00328DB8
// Address: 0x328db8 - 0x328dd8
void func_00328DB8_0x328db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328DB8_0x328db8");
#endif

    ctx->pc = 0x328db8u;

    // 0x328db8: 0x3e00008  jr          $ra
    ctx->pc = 0x328DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DB8u;
        // 0x328dbc: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328DC0u;
    // 0x328dc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x328dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x328dc4: 0x0  nop
    ctx->pc = 0x328dc4u;
    // NOP
    // 0x328dc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x328dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x328dcc: 0x0  nop
    ctx->pc = 0x328dccu;
    // NOP
    // 0x328dd0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x328dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x328dd4: 0x0  nop
    ctx->pc = 0x328dd4u;
    // NOP
    ctx->pc = 0x328dd8u;
}
