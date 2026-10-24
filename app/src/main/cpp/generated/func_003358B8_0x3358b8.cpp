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

// Function: func_003358B8
// Address: 0x3358b8 - 0x3358e8
void func_003358B8_0x3358b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003358B8_0x3358b8");
#endif

    switch (ctx->pc) {
        case 0x3358ccu: goto label_3358cc;
        case 0x3358d4u: goto label_3358d4;
        default: break;
    }

    ctx->pc = 0x3358b8u;

    // 0x3358b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3358b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3358bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3358bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3358c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3358c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3358c4: 0xc0cd736  jal         func_335CD8
    ctx->pc = 0x3358C4u;
    SET_GPR_U32(ctx, 31, 0x3358CCu);
    ctx->pc = 0x3358C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3358C4u;
    // 0x3358c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CD8u, 0x3358C4u, 0x3358CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3358CCu;
label_3358cc:
    // 0x3358cc: 0xc0cd63a  jal         func_3358E8
    ctx->pc = 0x3358CCu;
    SET_GPR_U32(ctx, 31, 0x3358D4u);
    ctx->pc = 0x3358D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3358CCu;
    // 0x3358d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3358E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3358E8u, 0x3358CCu, 0x3358D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3358D4u;
label_3358d4:
    // 0x3358d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3358d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3358d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3358d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3358dc: 0x80cd738  j           func_335CE0
    ctx->pc = 0x3358DCu;
    ctx->pc = 0x3358E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3358DCu;
    // 0x3358e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CE0u, 0x3358DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3358E4u;
    // 0x3358e4: 0x0  nop
    ctx->pc = 0x3358e4u;
    // NOP
    ctx->pc = 0x3358e8u;
}
