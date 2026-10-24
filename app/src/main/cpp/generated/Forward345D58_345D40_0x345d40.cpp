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

// Function: Forward345D58_345D40
// Address: 0x345d40 - 0x345d58
void Forward345D58_345D40_0x345d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward345D58_345D40_0x345d40");
#endif

    ctx->pc = 0x345d40u;

    // 0x345d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x345d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x345d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345d4c: 0x80d1756  j           func_345D58
    ctx->pc = 0x345D4Cu;
    ctx->pc = 0x345D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345D4Cu;
    // 0x345d50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345D58u, 0x345D4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x345D54u;
    // 0x345d54: 0x0  nop
    ctx->pc = 0x345d54u;
    // NOP
    ctx->pc = 0x345d58u;
}
