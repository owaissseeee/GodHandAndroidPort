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

// Function: Forward3B0640_33F3D0
// Address: 0x33f3d0 - 0x33f3f0
void Forward3B0640_33F3D0_0x33f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward3B0640_33F3D0_0x33f3d0");
#endif

    ctx->pc = 0x33f3d0u;

    // 0x33f3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f3d4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x33f3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33f3d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33f3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33f3dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x33f3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x33f3e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f3e4: 0x80ec190  j           func_3B0640
    ctx->pc = 0x33F3E4u;
    ctx->pc = 0x33F3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F3E4u;
    // 0x33f3e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0640u, 0x33F3E4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33F3ECu;
    // 0x33f3ec: 0x0  nop
    ctx->pc = 0x33f3ecu;
    // NOP
    ctx->pc = 0x33f3f0u;
}
