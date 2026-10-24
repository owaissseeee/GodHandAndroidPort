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

// Function: func_003A9228
// Address: 0x3a9228 - 0x3a9260
void func_003A9228_0x3a9228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A9228_0x3a9228");
#endif

    switch (ctx->pc) {
        case 0x3a9250u: goto label_3a9250;
        default: break;
    }

    ctx->pc = 0x3a9228u;

    // 0x3a9228: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a9228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a922c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a922cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a9230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a9230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a9234: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3a9234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9238: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3a9238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a923c: 0x8c44a62c  lw          $a0, -0x59D4($v0)
    ctx->pc = 0x3a923cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3a9240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a9240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a9244: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3a9244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9248: 0xc0ea406  jal         func_3A9018
    ctx->pc = 0x3A9248u;
    SET_GPR_U32(ctx, 31, 0x3A9250u);
    ctx->pc = 0x3A924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9248u;
    // 0x3a924c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9018u, 0x3A9248u, 0x3A9250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9250u;
label_3a9250:
    // 0x3a9250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a9250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a9254: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9254u;
        // 0x3a9258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A925Cu;
    // 0x3a925c: 0x0  nop
    ctx->pc = 0x3a925cu;
    // NOP
    ctx->pc = 0x3a9260u;
}
