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

// Function: func_0034CCB0
// Address: 0x34ccb0 - 0x34cce8
void func_0034CCB0_0x34ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034CCB0_0x34ccb0");
#endif

    ctx->pc = 0x34ccb0u;

    // 0x34ccb0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x34ccb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ccb4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x34ccb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x34ccb8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x34ccb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x34ccbc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x34ccbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x34ccc0: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x34ccc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34ccc4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x34ccc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x34ccc8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x34ccc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x34cccc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x34ccccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x34ccd0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x34ccd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x34ccd4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x34ccd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x34ccd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34ccd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x34ccdc: 0x3e00008  jr          $ra
    ctx->pc = 0x34CCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CCDCu;
        // 0x34cce0: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CCE4u;
    // 0x34cce4: 0x0  nop
    ctx->pc = 0x34cce4u;
    // NOP
    ctx->pc = 0x34cce8u;
}
