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

// Function: func_001D5780
// Address: 0x1d5780 - 0x1d57a0
void func_001D5780_0x1d5780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D5780_0x1d5780");
#endif

    switch (ctx->pc) {
        case 0x1d5790u: goto label_1d5790;
        default: break;
    }

    ctx->pc = 0x1d5780u;

    // 0x1d5780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5788: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1D5788u;
    SET_GPR_U32(ctx, 31, 0x1D5790u);
    ctx->pc = 0x1D578Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5788u;
    // 0x1d578c: 0x24840250  addiu       $a0, $a0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1D5788u, 0x1D5790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5790u;
label_1d5790:
    // 0x1d5790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5794: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5794u;
        // 0x1d5798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D579Cu;
    // 0x1d579c: 0x0  nop
    ctx->pc = 0x1d579cu;
    // NOP
    ctx->pc = 0x1d57a0u;
}
