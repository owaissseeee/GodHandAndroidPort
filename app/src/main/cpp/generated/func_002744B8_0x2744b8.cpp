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

// Function: func_002744B8
// Address: 0x2744b8 - 0x2744e0
void func_002744B8_0x2744b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002744B8_0x2744b8");
#endif

    ctx->pc = 0x2744b8u;

    // 0x2744b8: 0x8c820564  lw          $v0, 0x564($a0)
    ctx->pc = 0x2744b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x2744bc: 0x38420211  xori        $v0, $v0, 0x211
    ctx->pc = 0x2744bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)529);
    // 0x2744c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2744C0u;
    {
        const bool branch_taken_0x2744c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2744c0) {
            ctx->pc = 0x2744D8u;
            goto label_2744d8;
        }
    }
    ctx->pc = 0x2744C8u;
    // 0x2744c8: 0x8c8216d4  lw          $v0, 0x16D4($a0)
    ctx->pc = 0x2744c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5844)));
    // 0x2744cc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2744ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2744d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2744D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2744D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744D0u;
        // 0x2744d4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2744D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2744D8u;
label_2744d8:
    // 0x2744d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2744D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2744DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744D8u;
        // 0x2744dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2744D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2744E0u;
}
