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

// Function: func_003B1E40
// Address: 0x3b1e40 - 0x3b1e68
void func_003B1E40_0x3b1e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B1E40_0x3b1e40");
#endif

    switch (ctx->pc) {
        case 0x3b1e58u: goto label_3b1e58;
        default: break;
    }

    ctx->pc = 0x3b1e40u;

    // 0x3b1e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b1e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b1e44: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3b1e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1e48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B1E48u;
    {
        const bool branch_taken_0x3b1e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E48u;
        // 0x3b1e4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1e48) {
            ctx->pc = 0x3B1E58u;
            goto label_3b1e58;
        }
    }
    ctx->pc = 0x3B1E50u;
    // 0x3b1e50: 0xc0ec360  jal         func_3B0D80
    ctx->pc = 0x3B1E50u;
    SET_GPR_U32(ctx, 31, 0x3B1E58u);
    ctx->pc = 0x3B0D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0D80u, 0x3B1E50u, 0x3B1E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1E58u;
label_3b1e58:
    // 0x3b1e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1e5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b1e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b1e60: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E60u;
        // 0x3b1e64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1E68u;
}
