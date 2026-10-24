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

// Function: func_002E7FA8
// Address: 0x2e7fa8 - 0x2e7fe8
void func_002E7FA8_0x2e7fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E7FA8_0x2e7fa8");
#endif

    switch (ctx->pc) {
        case 0x2e7fd8u: goto label_2e7fd8;
        default: break;
    }

    ctx->pc = 0x2e7fa8u;

    // 0x2e7fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e7fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e7fac: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2e7facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2e7fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e7fb4: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x2e7fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x2e7fb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e7fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e7fbc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7FBCu;
    {
        const bool branch_taken_0x2e7fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FBCu;
        // 0x2e7fc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7fbc) {
            ctx->pc = 0x2E7FDCu;
            goto label_2e7fdc;
        }
    }
    ctx->pc = 0x2E7FC4u;
    // 0x2e7fc4: 0x908202cb  lbu         $v0, 0x2CB($a0)
    ctx->pc = 0x2e7fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 715)));
    // 0x2e7fc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7FC8u;
    {
        const bool branch_taken_0x2e7fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7fc8) {
            ctx->pc = 0x2E7FDCu;
            goto label_2e7fdc;
        }
    }
    ctx->pc = 0x2E7FD0u;
    // 0x2e7fd0: 0xc0bfac6  jal         func_2FEB18
    ctx->pc = 0x2E7FD0u;
    SET_GPR_U32(ctx, 31, 0x2E7FD8u);
    ctx->pc = 0x2FEB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB18u, 0x2E7FD0u, 0x2E7FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7FD8u;
label_2e7fd8:
    // 0x2e7fd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e7fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e7fdc:
    // 0x2e7fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FDCu;
        // 0x2e7fe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7FE4u;
    // 0x2e7fe4: 0x0  nop
    ctx->pc = 0x2e7fe4u;
    // NOP
    ctx->pc = 0x2e7fe8u;
}
