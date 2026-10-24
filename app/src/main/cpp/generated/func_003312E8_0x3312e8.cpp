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

// Function: func_003312E8
// Address: 0x3312e8 - 0x331310
void func_003312E8_0x3312e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003312E8_0x3312e8");
#endif

    switch (ctx->pc) {
        case 0x3312f8u: goto label_3312f8;
        case 0x331300u: goto label_331300;
        default: break;
    }

    ctx->pc = 0x3312e8u;

    // 0x3312e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3312e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3312ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3312ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3312f0: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3312F0u;
    SET_GPR_U32(ctx, 31, 0x3312F8u);
    ctx->pc = 0x3312F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3312F0u;
    // 0x3312f4: 0x24041300  addiu       $a0, $zero, 0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3312F0u, 0x3312F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3312F8u;
label_3312f8:
    // 0x3312f8: 0xc0e6368  jal         func_398DA0
    ctx->pc = 0x3312F8u;
    SET_GPR_U32(ctx, 31, 0x331300u);
    ctx->pc = 0x3312FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3312F8u;
    // 0x3312fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DA0u, 0x3312F8u, 0x331300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331300u;
label_331300:
    // 0x331300: 0x24041301  addiu       $a0, $zero, 0x1301
    ctx->pc = 0x331300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4865));
    // 0x331304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331308: 0x80cc71e  j           func_331C78
    ctx->pc = 0x331308u;
    ctx->pc = 0x33130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331308u;
    // 0x33130c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x331308u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x331310u;
}
