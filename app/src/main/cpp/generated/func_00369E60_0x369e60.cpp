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

// Function: func_00369E60
// Address: 0x369e60 - 0x369e80
void func_00369E60_0x369e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00369E60_0x369e60");
#endif

    ctx->pc = 0x369e60u;

    // 0x369e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x369e64: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x369e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x369e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x369e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x369e6c: 0x24841aa0  addiu       $a0, $a0, 0x1AA0
    ctx->pc = 0x369e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6816));
    // 0x369e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x369e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369e74: 0x80da7a0  j           func_369E80
    ctx->pc = 0x369E74u;
    ctx->pc = 0x369E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E74u;
    // 0x369e78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369E80u, 0x369E74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x369E7Cu;
    // 0x369e7c: 0x0  nop
    ctx->pc = 0x369e7cu;
    // NOP
    ctx->pc = 0x369e80u;
}
