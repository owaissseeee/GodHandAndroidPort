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

// Function: func_0031C900
// Address: 0x31c900 - 0x31c928
void func_0031C900_0x31c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031C900_0x31c900");
#endif

    switch (ctx->pc) {
        case 0x31c918u: goto label_31c918;
        default: break;
    }

    ctx->pc = 0x31c900u;

    // 0x31c900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31c904: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31c904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c908: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C908u;
    {
        const bool branch_taken_0x31c908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C908u;
        // 0x31c90c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c908) {
            ctx->pc = 0x31C918u;
            goto label_31c918;
        }
    }
    ctx->pc = 0x31C910u;
    // 0x31c910: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x31C910u;
    SET_GPR_U32(ctx, 31, 0x31C918u);
    ctx->pc = 0x31C914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C910u;
    // 0x31c914: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x31C910u, 0x31C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C918u;
label_31c918:
    // 0x31c918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c91c: 0x3e00008  jr          $ra
    ctx->pc = 0x31C91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C91Cu;
        // 0x31c920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C924u;
    // 0x31c924: 0x0  nop
    ctx->pc = 0x31c924u;
    // NOP
    ctx->pc = 0x31c928u;
}
