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

// Function: func_00374598
// Address: 0x374598 - 0x3745c0
void func_00374598_0x374598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00374598_0x374598");
#endif

    switch (ctx->pc) {
        case 0x3745b4u: goto label_3745b4;
        default: break;
    }

    ctx->pc = 0x374598u;

    // 0x374598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37459c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37459cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3745a0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3745a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3745a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3745A4u;
    {
        const bool branch_taken_0x3745a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3745A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745A4u;
        // 0x3745a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3745a4) {
            ctx->pc = 0x3745B8u;
            goto label_3745b8;
        }
    }
    ctx->pc = 0x3745ACu;
    // 0x3745ac: 0xc0cb810  jal         func_32E040
    ctx->pc = 0x3745ACu;
    SET_GPR_U32(ctx, 31, 0x3745B4u);
    ctx->pc = 0x3745B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3745ACu;
    // 0x3745b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E040u, 0x3745ACu, 0x3745B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3745B4u;
label_3745b4:
    // 0x3745b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3745b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3745b8:
    // 0x3745b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3745B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3745BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745B8u;
        // 0x3745bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3745B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3745C0u;
}
