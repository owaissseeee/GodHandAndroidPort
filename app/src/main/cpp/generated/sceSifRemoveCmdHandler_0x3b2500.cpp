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

// Function: sceSifRemoveCmdHandler
// Address: 0x3b2500 - 0x3b2550
void sceSifRemoveCmdHandler_0x3b2500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifRemoveCmdHandler_0x3b2500");
#endif

    ctx->pc = 0x3b2500u;

    // 0x3b2500: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3b2500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2504: 0x4c1000b  bgez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x3B2504u;
    {
        const bool branch_taken_0x3b2504 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x3B2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2504u;
        // 0x3b2508: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2504) {
            ctx->pc = 0x3B2534u;
            goto label_3b2534;
        }
    }
    ctx->pc = 0x3B250Cu;
    // 0x3b250c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3b250cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3b2510: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3b2510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3b2514: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3b2514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b2518: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b2518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3b251c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3b251cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3b2520: 0x8c64e524  lw          $a0, -0x1ADC($v1)
    ctx->pc = 0x3b2520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960420)));
    // 0x3b2524: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x3b2524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b2528: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3b2528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3b252c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B252Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B252Cu;
        // 0x3b2530: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B252Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2534u;
label_3b2534:
    // 0x3b2534: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b2534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3b2538: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x3b2538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b253c: 0x8c83e52c  lw          $v1, -0x1AD4($a0)
    ctx->pc = 0x3b253cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960428)));
    // 0x3b2540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b2540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b2544: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2544u;
        // 0x3b2548: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B254Cu;
    // 0x3b254c: 0x0  nop
    ctx->pc = 0x3b254cu;
    // NOP
    ctx->pc = 0x3b2550u;
}
