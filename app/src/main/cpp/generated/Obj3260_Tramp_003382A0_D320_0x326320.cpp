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

// Function: Obj3260_Tramp_003382A0_D320
// Address: 0x326320 - 0x326338
void Obj3260_Tramp_003382A0_D320_0x326320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3260_Tramp_003382A0_D320_0x326320");
#endif

    ctx->pc = 0x326320u;

    // 0x326320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32632c: 0x80ce0a8  j           func_3382A0
    ctx->pc = 0x32632Cu;
    ctx->pc = 0x326330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32632Cu;
    // 0x326330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3382A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3382A0u, 0x32632Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x326334u;
    // 0x326334: 0x0  nop
    ctx->pc = 0x326334u;
    // NOP
    ctx->pc = 0x326338u;
}
