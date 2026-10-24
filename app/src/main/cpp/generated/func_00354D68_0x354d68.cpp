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

// Function: func_00354D68
// Address: 0x354d68 - 0x354d80
void func_00354D68_0x354d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00354D68_0x354d68");
#endif

    ctx->pc = 0x354d68u;

    // 0x354d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x354d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x354d6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x354d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x354d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354d74: 0x80db0f4  j           func_36C3D0
    ctx->pc = 0x354D74u;
    ctx->pc = 0x354D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354D74u;
    // 0x354d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3D0u, 0x354D74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x354D7Cu;
    // 0x354d7c: 0x0  nop
    ctx->pc = 0x354d7cu;
    // NOP
    ctx->pc = 0x354d80u;
}
