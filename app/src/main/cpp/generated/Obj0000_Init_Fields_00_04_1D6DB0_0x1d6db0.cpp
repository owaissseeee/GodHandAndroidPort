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

// Function: Obj0000_Init_Fields_00_04_1D6DB0
// Address: 0x1d6db0 - 0x1d6dd0
void Obj0000_Init_Fields_00_04_1D6DB0_0x1d6db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Init_Fields_00_04_1D6DB0_0x1d6db0");
#endif

    ctx->pc = 0x1d6db0u;

    // 0x1d6db0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d6db4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d6db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d6db8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1d6db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1d6dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DBCu;
        // 0x1d6dc0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6DC4u;
    // 0x1d6dc4: 0x0  nop
    ctx->pc = 0x1d6dc4u;
    // NOP
    // 0x1d6dc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d6dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d6dcc: 0x0  nop
    ctx->pc = 0x1d6dccu;
    // NOP
    ctx->pc = 0x1d6dd0u;
}
