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

// Function: Thunk_func_00339520
// Address: 0x34df08 - 0x34df20
void Thunk_func_00339520_0x34df08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Thunk_func_00339520_0x34df08");
#endif

    ctx->pc = 0x34df08u;

    // 0x34df08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34df08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34df0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34df0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34df10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34df10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34df14: 0x80ce548  j           func_339520
    ctx->pc = 0x34DF14u;
    ctx->pc = 0x34DF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DF14u;
    // 0x34df18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339520u, 0x34DF14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34DF1Cu;
    // 0x34df1c: 0x0  nop
    ctx->pc = 0x34df1cu;
    // NOP
    ctx->pc = 0x34df20u;
}
