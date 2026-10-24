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

// Function: _InitSys
// Address: 0x328c30 - 0x328c58
void ps2__InitSys_0x328c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InitSys_0x328c30");
#endif

    switch (ctx->pc) {
        case 0x328c40u: goto label_328c40;
        case 0x328c48u: goto label_328c48;
        default: break;
    }

    ctx->pc = 0x328c30u;

    // 0x328c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x328c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x328c38: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x328C38u;
    SET_GPR_U32(ctx, 31, 0x328C40u);
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x328C38u, 0x328C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C40u;
label_328c40:
    // 0x328c40: 0xc0ca316  jal         func_328C58
    ctx->pc = 0x328C40u;
    SET_GPR_U32(ctx, 31, 0x328C48u);
    ctx->pc = 0x328C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C58u, 0x328C40u, 0x328C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C48u;
label_328c48:
    // 0x328c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x328c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328c4c: 0x80ca422  j           func_329088
    ctx->pc = 0x328C4Cu;
    ctx->pc = 0x328C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C4Cu;
    // 0x328c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x328C4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x328C54u;
    // 0x328c54: 0x0  nop
    ctx->pc = 0x328c54u;
    // NOP
    ctx->pc = 0x328c58u;
}
