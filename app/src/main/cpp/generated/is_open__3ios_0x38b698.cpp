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

// Function: is_open__3ios
// Address: 0x38b698 - 0x38b6c0
void is_open__3ios_0x38b698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("is_open__3ios_0x38b698");
#endif

    ctx->pc = 0x38b698u;

    // 0x38b698: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38b698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38b69c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38B69Cu;
    {
        const bool branch_taken_0x38b69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B69Cu;
        // 0x38b6a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b69c) {
            ctx->pc = 0x38B6B4u;
            goto label_38b6b4;
        }
    }
    ctx->pc = 0x38B6A4u;
    // 0x38b6a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x38b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38b6a8: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x38b6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x38b6ac: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x38b6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x38b6b0: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x38b6b0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38b6b4:
    // 0x38b6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x38B6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B6B4u;
        // 0x38b6b8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B6BCu;
    // 0x38b6bc: 0x0  nop
    ctx->pc = 0x38b6bcu;
    // NOP
    ctx->pc = 0x38b6c0u;
}
