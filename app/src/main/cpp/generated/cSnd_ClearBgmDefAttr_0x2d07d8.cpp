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

// Function: cSnd_ClearBgmDefAttr
// Address: 0x2d07d8 - 0x2d0820
void cSnd_ClearBgmDefAttr_0x2d07d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_ClearBgmDefAttr_0x2d07d8");
#endif

    switch (ctx->pc) {
        case 0x2d07f8u: goto label_2d07f8;
        default: break;
    }

    ctx->pc = 0x2d07d8u;

    // 0x2d07d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d07d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d07dc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2d07dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d07e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d07e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d07e4: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x2d07e4u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x2d07e8: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2d07e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2d07ec: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2d07ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2d07f0: 0xc0b41d6  jal         func_2D0758
    ctx->pc = 0x2D07F0u;
    SET_GPR_U32(ctx, 31, 0x2D07F8u);
    ctx->pc = 0x2D07F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D07F0u;
    // 0x2d07f4: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0758u, 0x2D07F0u, 0x2D07F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D07F8u;
label_2d07f8:
    // 0x2d07f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d07f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d07fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D07FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07FCu;
        // 0x2d0800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D07FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0804u;
    // 0x2d0804: 0x0  nop
    ctx->pc = 0x2d0804u;
    // NOP
    // 0x2d0808: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d0808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d080c: 0x0  nop
    ctx->pc = 0x2d080cu;
    // NOP
    // 0x2d0810: 0xac82005c  sw          $v0, 0x5C($a0)
    ctx->pc = 0x2d0810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
    // 0x2d0814: 0x0  nop
    ctx->pc = 0x2d0814u;
    // NOP
    // 0x2d0818: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x2d0818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x2d081c: 0x0  nop
    ctx->pc = 0x2d081cu;
    // NOP
    ctx->pc = 0x2d0820u;
}
