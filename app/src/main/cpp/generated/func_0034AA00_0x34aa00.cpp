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

// Function: func_0034AA00
// Address: 0x34aa00 - 0x34aa20
void func_0034AA00_0x34aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034AA00_0x34aa00");
#endif

    switch (ctx->pc) {
        case 0x34aa14u: goto label_34aa14;
        default: break;
    }

    ctx->pc = 0x34aa00u;

    // 0x34aa00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34aa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34aa04: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x34aa04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aa08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34aa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34aa0c: 0xc0d30e4  jal         func_34C390
    ctx->pc = 0x34AA0Cu;
    SET_GPR_U32(ctx, 31, 0x34AA14u);
    ctx->pc = 0x34AA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AA0Cu;
    // 0x34aa10: 0x8c85200c  lw          $a1, 0x200C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C390u, 0x34AA0Cu, 0x34AA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AA14u;
label_34aa14:
    // 0x34aa14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34aa14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34aa18: 0x3e00008  jr          $ra
    ctx->pc = 0x34AA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AA18u;
        // 0x34aa1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AA20u;
}
