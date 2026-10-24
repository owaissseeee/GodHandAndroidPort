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

// Function: func_00339520
// Address: 0x339520 - 0x339550
void func_00339520_0x339520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00339520_0x339520");
#endif

    switch (ctx->pc) {
        case 0x339530u: goto label_339530;
        case 0x339538u: goto label_339538;
        case 0x339540u: goto label_339540;
        default: break;
    }

    ctx->pc = 0x339520u;

    // 0x339520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x339524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x339528: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x339528u;
    SET_GPR_U32(ctx, 31, 0x339530u);
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x339528u, 0x339530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339530u;
label_339530:
    // 0x339530: 0xc0ce554  jal         func_339550
    ctx->pc = 0x339530u;
    SET_GPR_U32(ctx, 31, 0x339538u);
    ctx->pc = 0x339550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339550u, 0x339530u, 0x339538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339538u;
label_339538:
    // 0x339538: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x339538u;
    SET_GPR_U32(ctx, 31, 0x339540u);
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x339538u, 0x339540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339540u;
label_339540:
    // 0x339540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339544: 0x80ce272  j           func_3389C8
    ctx->pc = 0x339544u;
    ctx->pc = 0x339548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339544u;
    // 0x339548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389C8u, 0x339544u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33954Cu;
    // 0x33954c: 0x0  nop
    ctx->pc = 0x33954cu;
    // NOP
    ctx->pc = 0x339550u;
}
