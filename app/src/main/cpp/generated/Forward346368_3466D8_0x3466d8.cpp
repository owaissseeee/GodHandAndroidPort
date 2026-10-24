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

// Function: Forward346368_3466D8
// Address: 0x3466d8 - 0x3466f0
void Forward346368_3466D8_0x3466d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward346368_3466D8_0x3466d8");
#endif

    ctx->pc = 0x3466d8u;

    // 0x3466d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3466d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3466dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3466dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3466e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3466e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3466e4: 0x80d18da  j           func_346368
    ctx->pc = 0x3466E4u;
    ctx->pc = 0x3466E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3466E4u;
    // 0x3466e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346368u, 0x3466E4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3466ECu;
    // 0x3466ec: 0x0  nop
    ctx->pc = 0x3466ecu;
    // NOP
    ctx->pc = 0x3466f0u;
}
