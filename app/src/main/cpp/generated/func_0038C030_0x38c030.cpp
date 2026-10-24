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

// Function: func_0038C030
// Address: 0x38c030 - 0x38c048
void func_0038C030_0x38c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038C030_0x38c030");
#endif

    ctx->pc = 0x38c030u;

    // 0x38c030: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x38c030u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38c034: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x38c034u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x38c038: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x38c038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x38c03c: 0x3e00008  jr          $ra
    ctx->pc = 0x38C03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C03Cu;
        // 0x38c040: 0xfc850010  sd          $a1, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C044u;
    // 0x38c044: 0x0  nop
    ctx->pc = 0x38c044u;
    // NOP
    ctx->pc = 0x38c048u;
}
