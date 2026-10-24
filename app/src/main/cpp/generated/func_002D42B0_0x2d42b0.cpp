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

// Function: func_002D42B0
// Address: 0x2d42b0 - 0x2d42e0
void func_002D42B0_0x2d42b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D42B0_0x2d42b0");
#endif

    ctx->pc = 0x2d42b0u;

    // 0x2d42b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d42b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D42B4u;
    {
        const bool branch_taken_0x2d42b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d42b4) {
            ctx->pc = 0x2D42C8u;
            goto label_2d42c8;
        }
    }
    ctx->pc = 0x2D42BCu;
    // 0x2d42bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2d42bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d42c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D42C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D42C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D42C0u;
        // 0x2d42c4: 0x8c620024  lw          $v0, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D42C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D42C8u;
label_2d42c8:
    // 0x2d42c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D42C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D42CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D42C8u;
        // 0x2d42cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D42C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D42D0u;
    // 0x2d42d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d42d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d42d4: 0x0  nop
    ctx->pc = 0x2d42d4u;
    // NOP
    // 0x2d42d8: 0xe48c0050  swc1        $f12, 0x50($a0)
    ctx->pc = 0x2d42d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x2d42dc: 0x0  nop
    ctx->pc = 0x2d42dcu;
    // NOP
    ctx->pc = 0x2d42e0u;
}
