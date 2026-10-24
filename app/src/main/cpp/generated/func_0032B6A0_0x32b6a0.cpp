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

// Function: func_0032B6A0
// Address: 0x32b6a0 - 0x32b6e0
void func_0032B6A0_0x32b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B6A0_0x32b6a0");
#endif

    ctx->pc = 0x32b6a0u;

    // 0x32b6a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32b6a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32b6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32b6a8: 0xa0850098  sb          $a1, 0x98($a0)
    ctx->pc = 0x32b6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 5));
    // 0x32b6ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x32b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32b6b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32B6B0u;
    {
        const bool branch_taken_0x32b6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6B0u;
        // 0x32b6b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b6b0) {
            ctx->pc = 0x32B6C8u;
            goto label_32b6c8;
        }
    }
    ctx->pc = 0x32B6B8u;
    // 0x32b6b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32b6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b6bc: 0x80c9dc8  j           func_327720
    ctx->pc = 0x32B6BCu;
    ctx->pc = 0x32B6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B6BCu;
    // 0x32b6c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327720u, 0x32B6BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32B6C4u;
    // 0x32b6c4: 0x0  nop
    ctx->pc = 0x32b6c4u;
    // NOP
label_32b6c8:
    // 0x32b6c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32b6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x32B6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6CCu;
        // 0x32b6d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B6D4u;
    // 0x32b6d4: 0x0  nop
    ctx->pc = 0x32b6d4u;
    // NOP
    // 0x32b6d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32b6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32b6dc: 0x0  nop
    ctx->pc = 0x32b6dcu;
    // NOP
    ctx->pc = 0x32b6e0u;
}
