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

// Function: cSnd_AddBgmDefAttr
// Address: 0x2d07a8 - 0x2d07d8
void cSnd_AddBgmDefAttr_0x2d07a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_AddBgmDefAttr_0x2d07a8");
#endif

    switch (ctx->pc) {
        case 0x2d07c8u: goto label_2d07c8;
        default: break;
    }

    ctx->pc = 0x2d07a8u;

    // 0x2d07a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d07a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d07ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d07acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d07b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d07b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d07b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d07b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d07b8: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x2d07b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2d07bc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2d07bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2d07c0: 0xc0b41d2  jal         func_2D0748
    ctx->pc = 0x2D07C0u;
    SET_GPR_U32(ctx, 31, 0x2D07C8u);
    ctx->pc = 0x2D07C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D07C0u;
    // 0x2d07c4: 0xac430058  sw          $v1, 0x58($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0748u, 0x2D07C0u, 0x2D07C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D07C8u;
label_2d07c8:
    // 0x2d07c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d07c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d07cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D07CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07CCu;
        // 0x2d07d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D07CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D07D4u;
    // 0x2d07d4: 0x0  nop
    ctx->pc = 0x2d07d4u;
    // NOP
    ctx->pc = 0x2d07d8u;
}
