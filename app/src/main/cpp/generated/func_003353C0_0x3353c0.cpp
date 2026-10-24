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

// Function: func_003353C0
// Address: 0x3353c0 - 0x3353f8
void func_003353C0_0x3353c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003353C0_0x3353c0");
#endif

    switch (ctx->pc) {
        case 0x3353d4u: goto label_3353d4;
        case 0x3353dcu: goto label_3353dc;
        case 0x3353e4u: goto label_3353e4;
        default: break;
    }

    ctx->pc = 0x3353c0u;

    // 0x3353c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3353c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3353c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3353c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3353c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3353c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3353cc: 0xc0cd736  jal         func_335CD8
    ctx->pc = 0x3353CCu;
    SET_GPR_U32(ctx, 31, 0x3353D4u);
    ctx->pc = 0x3353D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3353CCu;
    // 0x3353d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CD8u, 0x3353CCu, 0x3353D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3353D4u;
label_3353d4:
    // 0x3353d4: 0xc0cd4fe  jal         func_3353F8
    ctx->pc = 0x3353D4u;
    SET_GPR_U32(ctx, 31, 0x3353DCu);
    ctx->pc = 0x3353D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3353D4u;
    // 0x3353d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F8u, 0x3353D4u, 0x3353DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3353DCu;
label_3353dc:
    // 0x3353dc: 0xc0cd738  jal         func_335CE0
    ctx->pc = 0x3353DCu;
    SET_GPR_U32(ctx, 31, 0x3353E4u);
    ctx->pc = 0x3353E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3353DCu;
    // 0x3353e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CE0u, 0x3353DCu, 0x3353E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3353E4u;
label_3353e4:
    // 0x3353e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3353e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3353e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3353e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3353ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3353ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3353f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3353F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3353F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3353F0u;
        // 0x3353f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3353F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3353F8u;
}
