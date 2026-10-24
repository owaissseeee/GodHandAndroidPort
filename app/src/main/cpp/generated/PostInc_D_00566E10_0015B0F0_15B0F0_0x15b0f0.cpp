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

// Function: PostInc_D_00566E10_0015B0F0_15B0F0
// Address: 0x15b0f0 - 0x15b138
void PostInc_D_00566E10_0015B0F0_15B0F0_0x15b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PostInc_D_00566E10_0015B0F0_15B0F0_0x15b0f0");
#endif

    ctx->pc = 0x15b0f0u;

    // 0x15b0f0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x15b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x15b0f4: 0x3c050006  lui         $a1, 0x6
    ctx->pc = 0x15b0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6 << 16));
    // 0x15b0f8: 0x8c6276b0  lw          $v0, 0x76B0($v1)
    ctx->pc = 0x15b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x15b0fc: 0x3c070056  lui         $a3, 0x56
    ctx->pc = 0x15b0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)86 << 16));
    // 0x15b100: 0x8ce66e10  lw          $a2, 0x6E10($a3)
    ctx->pc = 0x15b100u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x566E10u));
    // 0x15b104: 0x3c030050  lui         $v1, 0x50
    ctx->pc = 0x15b104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)80 << 16));
    // 0x15b108: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15b108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15b10c: 0x24636e10  addiu       $v1, $v1, 0x6E10
    ctx->pc = 0x15b10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28176));
    // 0x15b110: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x15b110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15b114: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x15b114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15b118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b11c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x15b11cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x15b120: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B120u;
    {
        const bool branch_taken_0x15b120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B120u;
        // 0x15b124: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b120) {
            ctx->pc = 0x15B130u;
            goto label_15b130;
        }
    }
    ctx->pc = 0x15B128u;
    // 0x15b128: 0x3e00008  jr          $ra
    ctx->pc = 0x15B128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B128u;
        // 0x15b12c: 0xace46e10  sw          $a0, 0x6E10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B130u;
label_15b130:
    // 0x15b130: 0x3e00008  jr          $ra
    ctx->pc = 0x15B130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B130u;
        // 0x15b134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B138u;
}
