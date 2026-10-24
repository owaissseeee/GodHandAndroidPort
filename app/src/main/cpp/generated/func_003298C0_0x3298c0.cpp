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

// Function: func_003298C0
// Address: 0x3298c0 - 0x3298f0
void func_003298C0_0x3298c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003298C0_0x3298c0");
#endif

    switch (ctx->pc) {
        case 0x3298d4u: goto label_3298d4;
        case 0x3298dcu: goto label_3298dc;
        default: break;
    }

    ctx->pc = 0x3298c0u;

    // 0x3298c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3298c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3298c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3298c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3298c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3298c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3298cc: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x3298CCu;
    SET_GPR_U32(ctx, 31, 0x3298D4u);
    ctx->pc = 0x3298D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3298CCu;
    // 0x3298d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x3298CCu, 0x3298D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3298D4u;
label_3298d4:
    // 0x3298d4: 0xc0ca63c  jal         func_3298F0
    ctx->pc = 0x3298D4u;
    SET_GPR_U32(ctx, 31, 0x3298DCu);
    ctx->pc = 0x3298D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3298D4u;
    // 0x3298d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3298F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298F0u, 0x3298D4u, 0x3298DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3298DCu;
label_3298dc:
    // 0x3298dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3298dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3298e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3298e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3298e4: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x3298E4u;
    ctx->pc = 0x3298E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3298E4u;
    // 0x3298e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x3298E4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3298ECu;
    // 0x3298ec: 0x0  nop
    ctx->pc = 0x3298ecu;
    // NOP
    ctx->pc = 0x3298f0u;
}
