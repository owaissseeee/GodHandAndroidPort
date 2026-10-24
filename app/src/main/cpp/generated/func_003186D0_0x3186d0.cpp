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

// Function: func_003186D0
// Address: 0x3186d0 - 0x318700
void func_003186D0_0x3186d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003186D0_0x3186d0");
#endif

    ctx->pc = 0x3186d0u;

    // 0x3186d0: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x3186d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x3186d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3186d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3186d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3186D8u;
    {
        const bool branch_taken_0x3186d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3186DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186D8u;
        // 0x3186dc: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186d8) {
            ctx->pc = 0x3186F4u;
            goto label_3186f4;
        }
    }
    ctx->pc = 0x3186E0u;
    // 0x3186e0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3186e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3186e4: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x3186e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
    // 0x3186e8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3186e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3186ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3186ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3186F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186ECu;
        // 0x3186f0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3186ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3186F4u;
label_3186f4:
    // 0x3186f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3186F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3186F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186F4u;
        // 0x3186f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3186F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3186FCu;
    // 0x3186fc: 0x0  nop
    ctx->pc = 0x3186fcu;
    // NOP
    ctx->pc = 0x318700u;
}
