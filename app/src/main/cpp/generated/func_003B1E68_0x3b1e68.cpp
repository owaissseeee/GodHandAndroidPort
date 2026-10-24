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

// Function: func_003B1E68
// Address: 0x3b1e68 - 0x3b1e90
void func_003B1E68_0x3b1e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B1E68_0x3b1e68");
#endif

    switch (ctx->pc) {
        case 0x3b1e80u: goto label_3b1e80;
        default: break;
    }

    ctx->pc = 0x3b1e68u;

    // 0x3b1e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b1e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b1e6c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3b1e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1e70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B1E70u;
    {
        const bool branch_taken_0x3b1e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E70u;
        // 0x3b1e74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1e70) {
            ctx->pc = 0x3B1E80u;
            goto label_3b1e80;
        }
    }
    ctx->pc = 0x3B1E78u;
    // 0x3b1e78: 0xc0ec38c  jal         func_3B0E30
    ctx->pc = 0x3B1E78u;
    SET_GPR_U32(ctx, 31, 0x3B1E80u);
    ctx->pc = 0x3B0E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0E30u, 0x3B1E78u, 0x3B1E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1E80u;
label_3b1e80:
    // 0x3b1e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1e84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b1e88: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E88u;
        // 0x3b1e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1E90u;
}
