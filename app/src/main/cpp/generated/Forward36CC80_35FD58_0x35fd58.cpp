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

// Function: Forward36CC80_35FD58
// Address: 0x35fd58 - 0x35fd78
void Forward36CC80_35FD58_0x35fd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward36CC80_35FD58_0x35fd58");
#endif

    ctx->pc = 0x35fd58u;

    // 0x35fd58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35fd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35fd5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35fd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35fd60: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x35fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x35fd64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35fd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fd68: 0x80db320  j           func_36CC80
    ctx->pc = 0x35FD68u;
    ctx->pc = 0x35FD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FD68u;
    // 0x35fd6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CC80u, 0x35FD68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35FD70u;
    // 0x35fd70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35fd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35fd74: 0x0  nop
    ctx->pc = 0x35fd74u;
    // NOP
    ctx->pc = 0x35fd78u;
}
