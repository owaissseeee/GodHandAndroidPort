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

// Function: func_003396C8
// Address: 0x3396c8 - 0x3396f8
void func_003396C8_0x3396c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003396C8_0x3396c8");
#endif

    switch (ctx->pc) {
        case 0x3396dcu: goto label_3396dc;
        case 0x3396e4u: goto label_3396e4;
        default: break;
    }

    ctx->pc = 0x3396c8u;

    // 0x3396c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3396c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3396cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3396ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3396d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3396d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3396d4: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x3396D4u;
    SET_GPR_U32(ctx, 31, 0x3396DCu);
    ctx->pc = 0x3396D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3396D4u;
    // 0x3396d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x3396D4u, 0x3396DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3396DCu;
label_3396dc:
    // 0x3396dc: 0xc0ce5be  jal         func_3396F8
    ctx->pc = 0x3396DCu;
    SET_GPR_U32(ctx, 31, 0x3396E4u);
    ctx->pc = 0x3396E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3396DCu;
    // 0x3396e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F8u, 0x3396DCu, 0x3396E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3396E4u;
label_3396e4:
    // 0x3396e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3396e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3396e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3396e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3396ec: 0x80ce284  j           func_338A10
    ctx->pc = 0x3396ECu;
    ctx->pc = 0x3396F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3396ECu;
    // 0x3396f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x3396ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3396F4u;
    // 0x3396f4: 0x0  nop
    ctx->pc = 0x3396f4u;
    // NOP
    ctx->pc = 0x3396f8u;
}
