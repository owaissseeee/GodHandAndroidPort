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

// Function: func_00368FE8
// Address: 0x368fe8 - 0x369020
void func_00368FE8_0x368fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00368FE8_0x368fe8");
#endif

    switch (ctx->pc) {
        case 0x368ff8u: goto label_368ff8;
        default: break;
    }

    ctx->pc = 0x368fe8u;

    // 0x368fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x368fec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x368fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x368ff0: 0xc0da408  jal         func_369020
    ctx->pc = 0x368FF0u;
    SET_GPR_U32(ctx, 31, 0x368FF8u);
    ctx->pc = 0x369020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369020u, 0x368FF0u, 0x368FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368FF8u;
label_368ff8:
    // 0x368ff8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x368ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368ffc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x368FFCu;
    {
        const bool branch_taken_0x368ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x369000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368FFCu;
        // 0x369000: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368ffc) {
            ctx->pc = 0x369010u;
            goto label_369010;
        }
    }
    ctx->pc = 0x369004u;
    // 0x369004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x369004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369008: 0x80da41e  j           func_369078
    ctx->pc = 0x369008u;
    ctx->pc = 0x36900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369008u;
    // 0x36900c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369078u, 0x369008u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x369010u;
label_369010:
    // 0x369010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x369010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369014: 0x3e00008  jr          $ra
    ctx->pc = 0x369014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369014u;
        // 0x369018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36901Cu;
    // 0x36901c: 0x0  nop
    ctx->pc = 0x36901cu;
    // NOP
    ctx->pc = 0x369020u;
}
