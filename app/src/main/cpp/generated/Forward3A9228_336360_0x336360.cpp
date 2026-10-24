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

// Function: Forward3A9228_336360
// Address: 0x336360 - 0x336378
void Forward3A9228_336360_0x336360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward3A9228_336360_0x336360");
#endif

    ctx->pc = 0x336360u;

    // 0x336360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x336364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x336368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33636c: 0x80ea48a  j           func_3A9228
    ctx->pc = 0x33636Cu;
    ctx->pc = 0x336370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33636Cu;
    // 0x336370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9228u, 0x33636Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x336374u;
    // 0x336374: 0x0  nop
    ctx->pc = 0x336374u;
    // NOP
    ctx->pc = 0x336378u;
}
