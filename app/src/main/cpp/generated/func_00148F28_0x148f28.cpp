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

// Function: func_00148F28
// Address: 0x148f28 - 0x148f50
void func_00148F28_0x148f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00148F28_0x148f28");
#endif

    ctx->pc = 0x148f28u;

    // 0x148f28: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x148f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x148f2c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x148f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x148f30: 0x2442d718  addiu       $v0, $v0, -0x28E8
    ctx->pc = 0x148f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956824));
    // 0x148f34: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x148f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x148f38: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x148f38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x148f3c: 0xfc830050  sd          $v1, 0x50($a0)
    ctx->pc = 0x148f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 3));
    // 0x148f40: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x148f40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x148f44: 0x3e00008  jr          $ra
    ctx->pc = 0x148F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F44u;
        // 0x148f48: 0xfc820100  sd          $v0, 0x100($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 256), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148F4Cu;
    // 0x148f4c: 0x0  nop
    ctx->pc = 0x148f4cu;
    // NOP
    ctx->pc = 0x148f50u;
}
