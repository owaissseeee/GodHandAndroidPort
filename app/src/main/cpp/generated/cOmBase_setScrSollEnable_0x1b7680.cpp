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

// Function: cOmBase_setScrSollEnable
// Address: 0x1b7680 - 0x1b76b0
void cOmBase_setScrSollEnable_0x1b7680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_setScrSollEnable_0x1b7680");
#endif

    switch (ctx->pc) {
        case 0x1b76a0u: goto label_1b76a0;
        default: break;
    }

    ctx->pc = 0x1b7680u;

    // 0x1b7680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7684: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b7684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b768c: 0xdc820540  ld          $v0, 0x540($a0)
    ctx->pc = 0x1b768cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1344)));
    // 0x1b7690: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1b7690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1b7694: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x1b7694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x1b7698: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x1B7698u;
    SET_GPR_U32(ctx, 31, 0x1B76A0u);
    ctx->pc = 0x1B769Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7698u;
    // 0x1b769c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x1B7698u, 0x1B76A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B76A0u;
label_1b76a0:
    // 0x1b76a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b76a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b76a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B76A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B76A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76A4u;
        // 0x1b76a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B76A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B76ACu;
    // 0x1b76ac: 0x0  nop
    ctx->pc = 0x1b76acu;
    // NOP
    ctx->pc = 0x1b76b0u;
}
