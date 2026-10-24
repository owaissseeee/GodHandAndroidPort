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

// Function: Forward345EE0_345EC8
// Address: 0x345ec8 - 0x345ee0
void Forward345EE0_345EC8_0x345ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward345EE0_345EC8_0x345ec8");
#endif

    ctx->pc = 0x345ec8u;

    // 0x345ec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x345ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x345ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345ed4: 0x80d17b8  j           func_345EE0
    ctx->pc = 0x345ED4u;
    ctx->pc = 0x345ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345ED4u;
    // 0x345ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345EE0u, 0x345ED4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x345EDCu;
    // 0x345edc: 0x0  nop
    ctx->pc = 0x345edcu;
    // NOP
    ctx->pc = 0x345ee0u;
}
