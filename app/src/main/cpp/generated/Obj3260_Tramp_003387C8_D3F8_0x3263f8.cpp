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

// Function: Obj3260_Tramp_003387C8_D3F8
// Address: 0x3263f8 - 0x326410
void Obj3260_Tramp_003387C8_D3F8_0x3263f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3260_Tramp_003387C8_D3F8_0x3263f8");
#endif

    ctx->pc = 0x3263f8u;

    // 0x3263f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3263f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3263fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3263fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326404: 0x80ce1f2  j           func_3387C8
    ctx->pc = 0x326404u;
    ctx->pc = 0x326408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326404u;
    // 0x326408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3387C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3387C8u, 0x326404u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32640Cu;
    // 0x32640c: 0x0  nop
    ctx->pc = 0x32640cu;
    // NOP
    ctx->pc = 0x326410u;
}
