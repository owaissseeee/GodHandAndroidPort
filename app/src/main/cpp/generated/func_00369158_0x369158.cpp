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

// Function: func_00369158
// Address: 0x369158 - 0x369188
void func_00369158_0x369158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00369158_0x369158");
#endif

    ctx->pc = 0x369158u;

    // 0x369158: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x369158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36915c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36915cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x369160: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x369160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x369164: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x369164u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x369168: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x369168u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x36916c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x36916cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x369170: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x369170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x369174: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x369174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x369178: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x369178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x36917c: 0x3e00008  jr          $ra
    ctx->pc = 0x36917Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36917Cu;
        // 0x369180: 0xac820020  sw          $v0, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36917Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369184u;
    // 0x369184: 0x0  nop
    ctx->pc = 0x369184u;
    // NOP
    ctx->pc = 0x369188u;
}
