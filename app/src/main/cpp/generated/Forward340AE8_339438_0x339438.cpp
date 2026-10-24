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

// Function: Forward340AE8_339438
// Address: 0x339438 - 0x339458
void Forward340AE8_339438_0x339438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward340AE8_339438_0x339438");
#endif

    ctx->pc = 0x339438u;

    // 0x339438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33943c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33943cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x339440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x339444: 0x24845a60  addiu       $a0, $a0, 0x5A60
    ctx->pc = 0x339444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23136));
    // 0x339448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33944c: 0x80d02ba  j           func_340AE8
    ctx->pc = 0x33944Cu;
    ctx->pc = 0x339450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33944Cu;
    // 0x339450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340AE8u, 0x33944Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339454u;
    // 0x339454: 0x0  nop
    ctx->pc = 0x339454u;
    // NOP
    ctx->pc = 0x339458u;
}
