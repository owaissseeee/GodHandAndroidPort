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

// Function: func_002A4B88
// Address: 0x2a4b88 - 0x2a4ba0
void func_002A4B88_0x2a4b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A4B88_0x2a4b88");
#endif

    ctx->pc = 0x2a4b88u;

    // 0x2a4b88: 0x30a5f000  andi        $a1, $a1, 0xF000
    ctx->pc = 0x2a4b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
    // 0x2a4b8c: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x2a4b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x2a4b90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2a4b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a4b94: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4B94u;
        // 0x2a4b98: 0x8482000e  lh          $v0, 0xE($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4B9Cu;
    // 0x2a4b9c: 0x0  nop
    ctx->pc = 0x2a4b9cu;
    // NOP
    ctx->pc = 0x2a4ba0u;
}
