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

// Function: Forward348870_342910
// Address: 0x342910 - 0x342928
void Forward348870_342910_0x342910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward348870_342910_0x342910");
#endif

    ctx->pc = 0x342910u;

    // 0x342910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342914: 0x24840284  addiu       $a0, $a0, 0x284
    ctx->pc = 0x342914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 644));
    // 0x342918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34291c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34291cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342920: 0x80d221c  j           func_348870
    ctx->pc = 0x342920u;
    ctx->pc = 0x342924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342920u;
    // 0x342924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348870u, 0x342920u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x342928u;
}
