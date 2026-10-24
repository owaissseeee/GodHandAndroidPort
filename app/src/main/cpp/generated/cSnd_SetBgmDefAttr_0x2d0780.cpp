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

// Function: cSnd_SetBgmDefAttr
// Address: 0x2d0780 - 0x2d07a8
void cSnd_SetBgmDefAttr_0x2d0780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SetBgmDefAttr_0x2d0780");
#endif

    switch (ctx->pc) {
        case 0x2d0798u: goto label_2d0798;
        default: break;
    }

    ctx->pc = 0x2d0780u;

    // 0x2d0780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0784: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2d0784u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d078c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2d078cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0790: 0xc0b41ca  jal         func_2D0728
    ctx->pc = 0x2D0790u;
    SET_GPR_U32(ctx, 31, 0x2D0798u);
    ctx->pc = 0x2D0794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0790u;
    // 0x2d0794: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0728u, 0x2D0790u, 0x2D0798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0798u;
label_2d0798:
    // 0x2d0798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d079c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D079Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D079Cu;
        // 0x2d07a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D079Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D07A4u;
    // 0x2d07a4: 0x0  nop
    ctx->pc = 0x2d07a4u;
    // NOP
    ctx->pc = 0x2d07a8u;
}
