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

// Function: func_0035A7A0
// Address: 0x35a7a0 - 0x35a7c8
void func_0035A7A0_0x35a7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035A7A0_0x35a7a0");
#endif

    ctx->pc = 0x35a7a0u;

    // 0x35a7a0: 0x8ca302cc  lw          $v1, 0x2CC($a1)
    ctx->pc = 0x35a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 716)));
    // 0x35a7a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x35a7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35a7a8: 0x10660004  beq         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A7A8u;
    {
        const bool branch_taken_0x35a7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x35A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A7A8u;
        // 0x35a7ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a7a8) {
            ctx->pc = 0x35A7BCu;
            goto label_35a7bc;
        }
    }
    ctx->pc = 0x35A7B0u;
    // 0x35a7b0: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x35a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x35a7b4: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x35a7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x35a7b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x35a7b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_35a7bc:
    // 0x35a7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x35A7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A7C4u;
    // 0x35a7c4: 0x0  nop
    ctx->pc = 0x35a7c4u;
    // NOP
    ctx->pc = 0x35a7c8u;
}
