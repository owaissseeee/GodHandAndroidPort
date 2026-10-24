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

// Function: Forward340A20_336E58
// Address: 0x336e58 - 0x336e70
void Forward340A20_336E58_0x336e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward340A20_336E58_0x336e58");
#endif

    ctx->pc = 0x336e58u;

    // 0x336e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336e5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x336e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x336e60: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x336e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x336e64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336e68: 0x80d0288  j           func_340A20
    ctx->pc = 0x336E68u;
    ctx->pc = 0x336E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336E68u;
    // 0x336e6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340A20u, 0x336E68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x336E70u;
}
