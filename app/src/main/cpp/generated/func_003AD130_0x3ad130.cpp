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

// Function: func_003AD130
// Address: 0x3ad130 - 0x3ad158
void func_003AD130_0x3ad130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AD130_0x3ad130");
#endif

    switch (ctx->pc) {
        case 0x3ad148u: goto label_3ad148;
        default: break;
    }

    ctx->pc = 0x3ad130u;

    // 0x3ad130: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3ad130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3ad134: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ad134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ad138: 0x8c44a62c  lw          $a0, -0x59D4($v0)
    ctx->pc = 0x3ad138u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3ad13c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ad13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ad140: 0xc0eb446  jal         func_3AD118
    ctx->pc = 0x3AD140u;
    SET_GPR_U32(ctx, 31, 0x3AD148u);
    ctx->pc = 0x3AD118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD118u, 0x3AD140u, 0x3AD148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD148u;
label_3ad148:
    // 0x3ad148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad14c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD14Cu;
        // 0x3ad150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD154u;
    // 0x3ad154: 0x0  nop
    ctx->pc = 0x3ad154u;
    // NOP
    ctx->pc = 0x3ad158u;
}
