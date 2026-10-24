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

// Function: func_00368E68
// Address: 0x368e68 - 0x368e80
void func_00368E68_0x368e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00368E68_0x368e68");
#endif

    ctx->pc = 0x368e68u;

    // 0x368e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x368e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x368e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x368e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x368e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368e74: 0x80da3a0  j           func_368E80
    ctx->pc = 0x368E74u;
    ctx->pc = 0x368E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368E74u;
    // 0x368e78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368E80u, 0x368E74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x368E7Cu;
    // 0x368e7c: 0x0  nop
    ctx->pc = 0x368e7cu;
    // NOP
    ctx->pc = 0x368e80u;
}
