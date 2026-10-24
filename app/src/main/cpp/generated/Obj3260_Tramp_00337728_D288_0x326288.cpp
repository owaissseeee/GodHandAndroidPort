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

// Function: Obj3260_Tramp_00337728_D288
// Address: 0x326288 - 0x3262a0
void Obj3260_Tramp_00337728_D288_0x326288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3260_Tramp_00337728_D288_0x326288");
#endif

    ctx->pc = 0x326288u;

    // 0x326288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32628c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32628cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326294: 0x80cddca  j           func_337728
    ctx->pc = 0x326294u;
    ctx->pc = 0x326298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326294u;
    // 0x326298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337728u, 0x326294u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32629Cu;
    // 0x32629c: 0x0  nop
    ctx->pc = 0x32629cu;
    // NOP
    ctx->pc = 0x3262a0u;
}
