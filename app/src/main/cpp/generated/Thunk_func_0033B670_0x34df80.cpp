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

// Function: Thunk_func_0033B670
// Address: 0x34df80 - 0x34df98
void Thunk_func_0033B670_0x34df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Thunk_func_0033B670_0x34df80");
#endif

    ctx->pc = 0x34df80u;

    // 0x34df80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34df84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34df84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34df88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34df88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34df8c: 0x80ced9c  j           func_33B670
    ctx->pc = 0x34DF8Cu;
    ctx->pc = 0x34DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DF8Cu;
    // 0x34df90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B670u, 0x34DF8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34DF94u;
    // 0x34df94: 0x0  nop
    ctx->pc = 0x34df94u;
    // NOP
    ctx->pc = 0x34df98u;
}
