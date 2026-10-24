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

// Function: func_003402E0
// Address: 0x3402e0 - 0x340308
void func_003402E0_0x3402e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003402E0_0x3402e0");
#endif

    switch (ctx->pc) {
        case 0x3402f4u: goto label_3402f4;
        default: break;
    }

    ctx->pc = 0x3402e0u;

    // 0x3402e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3402e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3402e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3402e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3402e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3402e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3402ec: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x3402ECu;
    SET_GPR_U32(ctx, 31, 0x3402F4u);
    ctx->pc = 0x3402F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3402ECu;
    // 0x3402f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x3402ECu, 0x3402F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3402F4u;
label_3402f4:
    // 0x3402f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3402f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3402f8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3402f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3402fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3402fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340300: 0x80ce284  j           func_338A10
    ctx->pc = 0x340300u;
    ctx->pc = 0x340304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340300u;
    // 0x340304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x340300u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x340308u;
}
