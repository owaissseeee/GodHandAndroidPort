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

// Function: func_00381D38
// Address: 0x381d38 - 0x381d60
void func_00381D38_0x381d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00381D38_0x381d38");
#endif

    switch (ctx->pc) {
        case 0x381d54u: goto label_381d54;
        default: break;
    }

    ctx->pc = 0x381d38u;

    // 0x381d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x381d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x381d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x381d40: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x381d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x381d44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x381D44u;
    {
        const bool branch_taken_0x381d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381D44u;
        // 0x381d48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381d44) {
            ctx->pc = 0x381D58u;
            goto label_381d58;
        }
    }
    ctx->pc = 0x381D4Cu;
    // 0x381d4c: 0xc0e0758  jal         func_381D60
    ctx->pc = 0x381D4Cu;
    SET_GPR_U32(ctx, 31, 0x381D54u);
    ctx->pc = 0x381D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381D60u, 0x381D4Cu, 0x381D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381D54u;
label_381d54:
    // 0x381d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_381d58:
    // 0x381d58: 0x3e00008  jr          $ra
    ctx->pc = 0x381D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381D58u;
        // 0x381d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381D60u;
}
