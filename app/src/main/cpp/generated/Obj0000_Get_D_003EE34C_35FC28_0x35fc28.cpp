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

// Function: Obj0000_Get_D_003EE34C_35FC28
// Address: 0x35fc28 - 0x35fc58
void Obj0000_Get_D_003EE34C_35FC28_0x35fc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_D_003EE34C_35FC28_0x35fc28");
#endif

    ctx->pc = 0x35fc28u;

    // 0x35fc28: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x35fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x35fc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x35FC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC2Cu;
        // 0x35fc30: 0x8c62e34c  lw          $v0, -0x1CB4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959948)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FC34u;
    // 0x35fc34: 0x0  nop
    ctx->pc = 0x35fc34u;
    // NOP
    // 0x35fc38: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x35fc38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x35fc3c: 0x0  nop
    ctx->pc = 0x35fc3cu;
    // NOP
    // 0x35fc40: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35fc44: 0x0  nop
    ctx->pc = 0x35fc44u;
    // NOP
    // 0x35fc48: 0xac450044  sw          $a1, 0x44($v0)
    ctx->pc = 0x35fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 5));
    // 0x35fc4c: 0x0  nop
    ctx->pc = 0x35fc4cu;
    // NOP
    // 0x35fc50: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x35fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
    // 0x35fc54: 0x0  nop
    ctx->pc = 0x35fc54u;
    // NOP
    ctx->pc = 0x35fc58u;
}
