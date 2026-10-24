#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __deregister_frame
// Address: 0x7ccf70 - 0x7ccf90
void ps2___deregister_frame_0x7ccf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___deregister_frame_0x7ccf70");
#endif

    switch (ctx->pc) {
        case 0x7ccf80u: goto label_7ccf80;
        default: break;
    }

    ctx->pc = 0x7ccf70u;

    // 0x7ccf70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ccf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ccf74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ccf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ccf78: 0xc1f33be  jal         func_7CCEF8
    ctx->pc = 0x7CCF78u;
    SET_GPR_U32(ctx, 31, 0x7CCF80u);
    ctx->pc = 0x7CCEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CCEF8u, 0x7CCF78u, 0x7CCF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCF80u;
label_7ccf80:
    // 0x7ccf80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ccf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ccf84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7ccf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccf88: 0x80e9f30  j           func_3A7CC0
    ctx->pc = 0x7CCF88u;
    ctx->pc = 0x7CCF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCF88u;
    // 0x7ccf8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x7CCF88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7CCF90u;
}
} // namespace gh_mcport
