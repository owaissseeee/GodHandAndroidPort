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

// Function: BuildPackedAddr_1FFD98
// Address: 0x1ffd98 - 0x1ffdb0
void BuildPackedAddr_1FFD98_0x1ffd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildPackedAddr_1FFD98_0x1ffd98");
#endif

    ctx->pc = 0x1ffd98u;

    // 0x1ffd98: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1ffd98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1ffd9c: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x1ffd9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1ffda0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ffda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1ffda4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ffda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ffda8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDA8u;
        // 0x1ffdac: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFDB0u;
}
