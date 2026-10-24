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

// Function: func_00151368
// Address: 0x151368 - 0x151398
void func_00151368_0x151368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00151368_0x151368");
#endif

    ctx->pc = 0x151368u;

    // 0x151368: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x151368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x15136c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x15136cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x151370: 0x8cc276b0  lw          $v0, 0x76B0($a2)
    ctx->pc = 0x151370u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x151374: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x151374u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x151378: 0x3463dc88  ori         $v1, $v1, 0xDC88
    ctx->pc = 0x151378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)56456);
    // 0x15137c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15137cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x151380: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x151380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x151384: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x151384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x151388: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x151388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15138c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x15138cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x151390: 0x3e00008  jr          $ra
    ctx->pc = 0x151390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151390u;
        // 0x151394: 0xdc820000  ld          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151398u;
}
