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

// Function: cSnd_SetBgmAttr
// Address: 0x2d0728 - 0x2d0748
void cSnd_SetBgmAttr_0x2d0728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SetBgmAttr_0x2d0728");
#endif

    switch (ctx->pc) {
        case 0x2d0738u: goto label_2d0738;
        default: break;
    }

    ctx->pc = 0x2d0728u;

    // 0x2d0728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d072c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d072cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0730: 0xc0b4208  jal         func_2D0820
    ctx->pc = 0x2D0730u;
    SET_GPR_U32(ctx, 31, 0x2D0738u);
    ctx->pc = 0x2D0734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0730u;
    // 0x2d0734: 0xac850050  sw          $a1, 0x50($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0820u, 0x2D0730u, 0x2D0738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0738u;
label_2d0738:
    // 0x2d0738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d073c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D073Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D073Cu;
        // 0x2d0740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D073Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0744u;
    // 0x2d0744: 0x0  nop
    ctx->pc = 0x2d0744u;
    // NOP
    ctx->pc = 0x2d0748u;
}
