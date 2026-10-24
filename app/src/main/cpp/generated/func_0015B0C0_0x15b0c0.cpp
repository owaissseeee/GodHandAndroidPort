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

// Function: func_0015B0C0
// Address: 0x15b0c0 - 0x15b0f0
void func_0015B0C0_0x15b0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015B0C0_0x15b0c0");
#endif

    ctx->pc = 0x15b0c0u;

    // 0x15b0c0: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x15b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x15b0c4: 0x3c050006  lui         $a1, 0x6
    ctx->pc = 0x15b0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6 << 16));
    // 0x15b0c8: 0x8c8276b0  lw          $v0, 0x76B0($a0)
    ctx->pc = 0x15b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x15b0cc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x15b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x15b0d0: 0x24636e10  addiu       $v1, $v1, 0x6E10
    ctx->pc = 0x15b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28176));
    // 0x15b0d4: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x15b0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
    // 0x15b0d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15b0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15b0dc: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x15b0dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15b0e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x15B0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0E4u;
        // 0x15b0e8: 0xac826e10  sw          $v0, 0x6E10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B0ECu;
    // 0x15b0ec: 0x0  nop
    ctx->pc = 0x15b0ecu;
    // NOP
    ctx->pc = 0x15b0f0u;
}
