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

// Function: Forward33B5C8_33B670
// Address: 0x33b670 - 0x33b688
void Forward33B5C8_33B670_0x33b670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33B5C8_33B670_0x33b670");
#endif

    ctx->pc = 0x33b670u;

    // 0x33b670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b674: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33b674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33b67c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b680: 0x80ced72  j           func_33B5C8
    ctx->pc = 0x33B680u;
    ctx->pc = 0x33B684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B680u;
    // 0x33b684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B5C8u, 0x33B680u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33B688u;
}
