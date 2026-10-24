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

// Function: Thunk_func_003394A0
// Address: 0x34def0 - 0x34df08
void Thunk_func_003394A0_0x34def0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Thunk_func_003394A0_0x34def0");
#endif

    ctx->pc = 0x34def0u;

    // 0x34def0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34def0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34def4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34def4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34def8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34def8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34defc: 0x80ce528  j           func_3394A0
    ctx->pc = 0x34DEFCu;
    ctx->pc = 0x34DF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DEFCu;
    // 0x34df00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394A0u, 0x34DEFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34DF04u;
    // 0x34df04: 0x0  nop
    ctx->pc = 0x34df04u;
    // NOP
    ctx->pc = 0x34df08u;
}
