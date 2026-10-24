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

// Function: Obj3260_Tramp_00337C88_D208
// Address: 0x326208 - 0x326220
void Obj3260_Tramp_00337C88_D208_0x326208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3260_Tramp_00337C88_D208_0x326208");
#endif

    ctx->pc = 0x326208u;

    // 0x326208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32620c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32620cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326214: 0x80cdf22  j           func_337C88
    ctx->pc = 0x326214u;
    ctx->pc = 0x326218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326214u;
    // 0x326218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337C88u, 0x326214u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32621Cu;
    // 0x32621c: 0x0  nop
    ctx->pc = 0x32621cu;
    // NOP
    ctx->pc = 0x326220u;
}
