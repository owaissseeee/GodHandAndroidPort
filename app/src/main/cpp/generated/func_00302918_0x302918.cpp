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

// Function: func_00302918
// Address: 0x302918 - 0x302930
void func_00302918_0x302918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00302918_0x302918");
#endif

    ctx->pc = 0x302918u;

    // 0x302918: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x302918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x30291c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x30291cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x302920: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x302920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x302924: 0x3e00008  jr          $ra
    ctx->pc = 0x302924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302924u;
        // 0x302928: 0xac820114  sw          $v0, 0x114($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30292Cu;
    // 0x30292c: 0x0  nop
    ctx->pc = 0x30292cu;
    // NOP
    ctx->pc = 0x302930u;
}
