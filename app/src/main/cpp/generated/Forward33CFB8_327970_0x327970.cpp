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

// Function: Forward33CFB8_327970
// Address: 0x327970 - 0x327988
void Forward33CFB8_327970_0x327970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33CFB8_327970_0x327970");
#endif

    ctx->pc = 0x327970u;

    // 0x327970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x327978: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x327978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32797c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32797cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327980: 0x80cf3ee  j           func_33CFB8
    ctx->pc = 0x327980u;
    ctx->pc = 0x327984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327980u;
    // 0x327984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CFB8u, 0x327980u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327988u;
}
