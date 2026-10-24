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

// Function: Obj0000_Get_Ptr_D_003EE088_Scaled_8_348920
// Address: 0x348920 - 0x348938
void Obj0000_Get_Ptr_D_003EE088_Scaled_8_348920_0x348920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_Ptr_D_003EE088_Scaled_8_348920_0x348920");
#endif

    ctx->pc = 0x348920u;

    // 0x348920: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x348920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x348924: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x348924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x348928: 0x2421e088  addiu       $at, $at, -0x1F78
    ctx->pc = 0x348928u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294959240));
    // 0x34892c: 0x3e00008  jr          $ra
    ctx->pc = 0x34892Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34892Cu;
        // 0x348930: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34892Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348934u;
    // 0x348934: 0x0  nop
    ctx->pc = 0x348934u;
    // NOP
    ctx->pc = 0x348938u;
}
