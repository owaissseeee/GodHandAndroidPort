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

// Function: Obj3260_Tramp_00338818_D410
// Address: 0x326410 - 0x326428
void Obj3260_Tramp_00338818_D410_0x326410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3260_Tramp_00338818_D410_0x326410");
#endif

    ctx->pc = 0x326410u;

    // 0x326410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32641c: 0x80ce206  j           func_338818
    ctx->pc = 0x32641Cu;
    ctx->pc = 0x326420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32641Cu;
    // 0x326420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338818u, 0x32641Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x326424u;
    // 0x326424: 0x0  nop
    ctx->pc = 0x326424u;
    // NOP
    ctx->pc = 0x326428u;
}
