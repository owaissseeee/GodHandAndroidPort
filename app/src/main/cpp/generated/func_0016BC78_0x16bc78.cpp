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

// Function: func_0016BC78
// Address: 0x16bc78 - 0x16bca0
void func_0016BC78_0x16bc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016BC78_0x16bc78");
#endif

    switch (ctx->pc) {
        case 0x16bc90u: goto label_16bc90;
        default: break;
    }

    ctx->pc = 0x16bc78u;

    // 0x16bc78: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16bc7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16bc7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bc80: 0x8c45ec68  lw          $a1, -0x1398($v0)
    ctx->pc = 0x16bc80u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5FEC68u));
    // 0x16bc84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bc88: 0xc05ac7e  jal         func_16B1F8
    ctx->pc = 0x16BC88u;
    SET_GPR_U32(ctx, 31, 0x16BC90u);
    ctx->pc = 0x16B1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B1F8u, 0x16BC88u, 0x16BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC90u;
label_16bc90:
    // 0x16bc90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bc94: 0x3e00008  jr          $ra
    ctx->pc = 0x16BC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC94u;
        // 0x16bc98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BC9Cu;
    // 0x16bc9c: 0x0  nop
    ctx->pc = 0x16bc9cu;
    // NOP
    ctx->pc = 0x16bca0u;
}
