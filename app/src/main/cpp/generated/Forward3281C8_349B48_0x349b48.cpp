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

// Function: Forward3281C8_349B48
// Address: 0x349b48 - 0x349b60
void Forward3281C8_349B48_0x349b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward3281C8_349B48_0x349b48");
#endif

    ctx->pc = 0x349b48u;

    // 0x349b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349b54: 0x80ca072  j           func_3281C8
    ctx->pc = 0x349B54u;
    ctx->pc = 0x349B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349B54u;
    // 0x349b58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3281C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3281C8u, 0x349B54u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x349B5Cu;
    // 0x349b5c: 0x0  nop
    ctx->pc = 0x349b5cu;
    // NOP
    ctx->pc = 0x349b60u;
}
