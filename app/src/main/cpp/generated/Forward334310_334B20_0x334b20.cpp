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

// Function: Forward334310_334B20
// Address: 0x334b20 - 0x334b38
void Forward334310_334B20_0x334b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward334310_334B20_0x334b20");
#endif

    ctx->pc = 0x334b20u;

    // 0x334b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x334b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x334b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x334b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x334b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334b2c: 0x80cd0c4  j           func_334310
    ctx->pc = 0x334B2Cu;
    ctx->pc = 0x334B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B2Cu;
    // 0x334b30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334310u, 0x334B2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x334B34u;
    // 0x334b34: 0x0  nop
    ctx->pc = 0x334b34u;
    // NOP
    ctx->pc = 0x334b38u;
}
