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

// Function: func_0035AB80
// Address: 0x35ab80 - 0x35ab98
void func_0035AB80_0x35ab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035AB80_0x35ab80");
#endif

    ctx->pc = 0x35ab80u;

    // 0x35ab80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ab84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ab88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ab88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ab8c: 0x80d6ae6  j           func_35AB98
    ctx->pc = 0x35AB8Cu;
    ctx->pc = 0x35AB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AB8Cu;
    // 0x35ab90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AB98u, 0x35AB8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35AB94u;
    // 0x35ab94: 0x0  nop
    ctx->pc = 0x35ab94u;
    // NOP
    ctx->pc = 0x35ab98u;
}
