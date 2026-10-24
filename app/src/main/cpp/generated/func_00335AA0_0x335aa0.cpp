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

// Function: func_00335AA0
// Address: 0x335aa0 - 0x335ad8
void func_00335AA0_0x335aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335AA0_0x335aa0");
#endif

    switch (ctx->pc) {
        case 0x335ab4u: goto label_335ab4;
        case 0x335abcu: goto label_335abc;
        case 0x335ac4u: goto label_335ac4;
        default: break;
    }

    ctx->pc = 0x335aa0u;

    // 0x335aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335aa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335aa8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x335aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x335aac: 0xc0cd736  jal         func_335CD8
    ctx->pc = 0x335AACu;
    SET_GPR_U32(ctx, 31, 0x335AB4u);
    ctx->pc = 0x335AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335AACu;
    // 0x335ab0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CD8u, 0x335AACu, 0x335AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335AB4u;
label_335ab4:
    // 0x335ab4: 0xc0cd6b6  jal         func_335AD8
    ctx->pc = 0x335AB4u;
    SET_GPR_U32(ctx, 31, 0x335ABCu);
    ctx->pc = 0x335AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335AB4u;
    // 0x335ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335AD8u, 0x335AB4u, 0x335ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335ABCu;
label_335abc:
    // 0x335abc: 0xc0cd738  jal         func_335CE0
    ctx->pc = 0x335ABCu;
    SET_GPR_U32(ctx, 31, 0x335AC4u);
    ctx->pc = 0x335AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335ABCu;
    // 0x335ac0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CE0u, 0x335ABCu, 0x335AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335AC4u;
label_335ac4:
    // 0x335ac4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x335ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335ac8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x335ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x335AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335AD0u;
        // 0x335ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335AD8u;
}
