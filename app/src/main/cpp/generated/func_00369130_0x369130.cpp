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

// Function: func_00369130
// Address: 0x369130 - 0x369158
void func_00369130_0x369130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00369130_0x369130");
#endif

    ctx->pc = 0x369130u;

    // 0x369130: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x369130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x369134: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x369134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x369138: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x369138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36913c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x36913cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x369140: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x369140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x369144: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x369144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x369148: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x369148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x36914c: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x36914cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x369150: 0x3e00008  jr          $ra
    ctx->pc = 0x369150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369150u;
        // 0x369154: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369158u;
}
