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

// Function: cCoreSave_loadWorldToggle
// Address: 0x1f9e68 - 0x1f9e90
void cCoreSave_loadWorldToggle_0x1f9e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_loadWorldToggle_0x1f9e68");
#endif

    switch (ctx->pc) {
        case 0x1f9e84u: goto label_1f9e84;
        default: break;
    }

    ctx->pc = 0x1f9e68u;

    // 0x1f9e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f9e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9e70: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1f9e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9e74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9E74u;
    {
        const bool branch_taken_0x1f9e74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E74u;
        // 0x1f9e78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e74) {
            ctx->pc = 0x1F9E88u;
            goto label_1f9e88;
        }
    }
    ctx->pc = 0x1F9E7Cu;
    // 0x1f9e7c: 0xc0dd5c0  jal         func_375700
    ctx->pc = 0x1F9E7Cu;
    SET_GPR_U32(ctx, 31, 0x1F9E84u);
    ctx->pc = 0x1F9E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9E7Cu;
    // 0x1f9e80: 0x8c840170  lw          $a0, 0x170($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375700u, 0x1F9E7Cu, 0x1F9E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E84u;
label_1f9e84:
    // 0x1f9e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9e88:
    // 0x1f9e88: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E88u;
        // 0x1f9e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9E90u;
}
