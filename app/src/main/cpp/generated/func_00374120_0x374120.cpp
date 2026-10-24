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

// Function: func_00374120
// Address: 0x374120 - 0x374148
void func_00374120_0x374120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00374120_0x374120");
#endif

    switch (ctx->pc) {
        case 0x37413cu: goto label_37413c;
        default: break;
    }

    ctx->pc = 0x374120u;

    // 0x374120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374128: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x374128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37412c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37412Cu;
    {
        const bool branch_taken_0x37412c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x374130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37412Cu;
        // 0x374130: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37412c) {
            ctx->pc = 0x374140u;
            goto label_374140;
        }
    }
    ctx->pc = 0x374134u;
    // 0x374134: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x374134u;
    SET_GPR_U32(ctx, 31, 0x37413Cu);
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x374134u, 0x37413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37413Cu;
label_37413c:
    // 0x37413c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37413cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_374140:
    // 0x374140: 0x3e00008  jr          $ra
    ctx->pc = 0x374140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374140u;
        // 0x374144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374148u;
}
