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

// Function: func_00374958
// Address: 0x374958 - 0x374980
void func_00374958_0x374958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00374958_0x374958");
#endif

    switch (ctx->pc) {
        case 0x374974u: goto label_374974;
        default: break;
    }

    ctx->pc = 0x374958u;

    // 0x374958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37495c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37495cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374960: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x374960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x374964: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x374964u;
    {
        const bool branch_taken_0x374964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x374968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374964u;
        // 0x374968: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374964) {
            ctx->pc = 0x374978u;
            goto label_374978;
        }
    }
    ctx->pc = 0x37496Cu;
    // 0x37496c: 0xc0cb77e  jal         func_32DDF8
    ctx->pc = 0x37496Cu;
    SET_GPR_U32(ctx, 31, 0x374974u);
    ctx->pc = 0x32DDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DDF8u, 0x37496Cu, 0x374974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374974u;
label_374974:
    // 0x374974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_374978:
    // 0x374978: 0x3e00008  jr          $ra
    ctx->pc = 0x374978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374978u;
        // 0x37497c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374980u;
}
