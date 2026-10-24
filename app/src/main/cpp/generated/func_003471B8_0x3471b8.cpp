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

// Function: func_003471B8
// Address: 0x3471b8 - 0x3471f0
void func_003471B8_0x3471b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003471B8_0x3471b8");
#endif

    switch (ctx->pc) {
        case 0x3471ccu: goto label_3471cc;
        default: break;
    }

    ctx->pc = 0x3471b8u;

    // 0x3471b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3471b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3471bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3471bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3471c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3471c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3471c4: 0xc0d1b12  jal         func_346C48
    ctx->pc = 0x3471C4u;
    SET_GPR_U32(ctx, 31, 0x3471CCu);
    ctx->pc = 0x3471C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3471C4u;
    // 0x3471c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C48u, 0x3471C4u, 0x3471CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3471CCu;
label_3471cc:
    // 0x3471cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3471ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3471d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3471d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3471d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3471d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3471d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3471d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3471dc: 0x80d7f16  j           func_35FC58
    ctx->pc = 0x3471DCu;
    ctx->pc = 0x3471E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3471DCu;
    // 0x3471e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FC58u, 0x3471DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3471E4u;
    // 0x3471e4: 0x0  nop
    ctx->pc = 0x3471e4u;
    // NOP
    // 0x3471e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3471e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3471ec: 0x0  nop
    ctx->pc = 0x3471ecu;
    // NOP
    ctx->pc = 0x3471f0u;
}
