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

// Function: Obj38B8_IsByte1A_Zero
// Address: 0x38bfc8 - 0x38bfd8
void Obj38B8_IsByte1A_Zero_0x38bfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj38B8_IsByte1A_Zero_0x38bfc8");
#endif

    ctx->pc = 0x38bfc8u;

    // 0x38bfc8: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x38bfc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x38bfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x38BFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BFCCu;
        // 0x38bfd0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BFD4u;
    // 0x38bfd4: 0x0  nop
    ctx->pc = 0x38bfd4u;
    // NOP
    ctx->pc = 0x38bfd8u;
}
