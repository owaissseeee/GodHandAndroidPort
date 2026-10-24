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

// Function: func_003448B0
// Address: 0x3448b0 - 0x3448f8
void func_003448B0_0x3448b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003448B0_0x3448b0");
#endif

    ctx->pc = 0x3448b0u;

    // 0x3448b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3448b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3448b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3448b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3448b8: 0x8c8202d4  lw          $v0, 0x2D4($a0)
    ctx->pc = 0x3448b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 724)));
    // 0x3448bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3448BCu;
    {
        const bool branch_taken_0x3448bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3448bc) {
            ctx->pc = 0x3448D0u;
            goto label_3448d0;
        }
    }
    ctx->pc = 0x3448C4u;
    // 0x3448c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3448C4u;
    {
        const bool branch_taken_0x3448c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3448C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448C4u;
        // 0x3448c8: 0xac8502d4  sw          $a1, 0x2D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 724), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3448c4) {
            ctx->pc = 0x3448E8u;
            goto label_3448e8;
        }
    }
    ctx->pc = 0x3448CCu;
    // 0x3448cc: 0x0  nop
    ctx->pc = 0x3448ccu;
    // NOP
label_3448d0:
    // 0x3448d0: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3448D0u;
    {
        const bool branch_taken_0x3448d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3448D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448D0u;
        // 0x3448d4: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3448d0) {
            ctx->pc = 0x3448E8u;
            goto label_3448e8;
        }
    }
    ctx->pc = 0x3448D8u;
    // 0x3448d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3448d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3448dc: 0x24847830  addiu       $a0, $a0, 0x7830
    ctx->pc = 0x3448dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30768));
    // 0x3448e0: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x3448E0u;
    ctx->pc = 0x3448E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3448E0u;
    // 0x3448e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3448E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3448E8u;
label_3448e8:
    // 0x3448e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3448e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3448ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3448ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3448F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448ECu;
        // 0x3448f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3448ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3448F4u;
    // 0x3448f4: 0x0  nop
    ctx->pc = 0x3448f4u;
    // NOP
    ctx->pc = 0x3448f8u;
}
