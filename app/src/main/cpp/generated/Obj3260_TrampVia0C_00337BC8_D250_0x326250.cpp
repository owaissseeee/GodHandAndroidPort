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

// Function: Obj3260_TrampVia0C_00337BC8_D250
// Address: 0x326250 - 0x326288
void Obj3260_TrampVia0C_00337BC8_D250_0x326250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3260_TrampVia0C_00337BC8_D250_0x326250");
#endif

    ctx->pc = 0x326250u;

    // 0x326250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326258: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x326258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x32625c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32625cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326260: 0x80cdef2  j           func_337BC8
    ctx->pc = 0x326260u;
    ctx->pc = 0x326264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326260u;
    // 0x326264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BC8u, 0x326260u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x326268u;
    // 0x326268: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x326268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32626c: 0x0  nop
    ctx->pc = 0x32626cu;
    // NOP
    // 0x326270: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x326270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x326274: 0x0  nop
    ctx->pc = 0x326274u;
    // NOP
    // 0x326278: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x326278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32627c: 0x0  nop
    ctx->pc = 0x32627cu;
    // NOP
    // 0x326280: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x326280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x326284: 0x0  nop
    ctx->pc = 0x326284u;
    // NOP
    ctx->pc = 0x326288u;
}
