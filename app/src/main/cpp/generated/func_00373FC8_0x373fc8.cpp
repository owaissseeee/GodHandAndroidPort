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

// Function: func_00373FC8
// Address: 0x373fc8 - 0x373ff0
void func_00373FC8_0x373fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00373FC8_0x373fc8");
#endif

    switch (ctx->pc) {
        case 0x373fe4u: goto label_373fe4;
        default: break;
    }

    ctx->pc = 0x373fc8u;

    // 0x373fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373fcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373fd0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x373fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x373fd4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x373FD4u;
    {
        const bool branch_taken_0x373fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x373FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373FD4u;
        // 0x373fd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373fd4) {
            ctx->pc = 0x373FE8u;
            goto label_373fe8;
        }
    }
    ctx->pc = 0x373FDCu;
    // 0x373fdc: 0xc0cacc0  jal         func_32B300
    ctx->pc = 0x373FDCu;
    SET_GPR_U32(ctx, 31, 0x373FE4u);
    ctx->pc = 0x373FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373FDCu;
    // 0x373fe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B300u, 0x373FDCu, 0x373FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373FE4u;
label_373fe4:
    // 0x373fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_373fe8:
    // 0x373fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x373FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373FE8u;
        // 0x373fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373FF0u;
}
