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

// Function: func_0034FE78
// Address: 0x34fe78 - 0x34fe90
void func_0034FE78_0x34fe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034FE78_0x34fe78");
#endif

    ctx->pc = 0x34fe78u;

    // 0x34fe78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34fe78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34fe7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34fe7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34fe80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34fe80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fe84: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34FE84u;
    ctx->pc = 0x34FE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FE84u;
    // 0x34fe88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34FE84u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34FE8Cu;
    // 0x34fe8c: 0x0  nop
    ctx->pc = 0x34fe8cu;
    // NOP
    ctx->pc = 0x34fe90u;
}
