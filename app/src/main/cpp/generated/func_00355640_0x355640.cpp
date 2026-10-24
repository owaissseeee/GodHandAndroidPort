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

// Function: func_00355640
// Address: 0x355640 - 0x355658
void func_00355640_0x355640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00355640_0x355640");
#endif

    ctx->pc = 0x355640u;

    // 0x355640: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x355640u;
    {
        const bool branch_taken_0x355640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x355644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355640u;
        // 0x355644: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355640) {
            ctx->pc = 0x35564Cu;
            goto label_35564c;
        }
    }
    ctx->pc = 0x355648u;
    // 0x355648: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x355648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_35564c:
    // 0x35564c: 0x3e00008  jr          $ra
    ctx->pc = 0x35564Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35564Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355654u;
    // 0x355654: 0x0  nop
    ctx->pc = 0x355654u;
    // NOP
    ctx->pc = 0x355658u;
}
