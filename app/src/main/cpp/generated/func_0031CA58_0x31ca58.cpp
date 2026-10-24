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

// Function: func_0031CA58
// Address: 0x31ca58 - 0x31ca88
void func_0031CA58_0x31ca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031CA58_0x31ca58");
#endif

    ctx->pc = 0x31ca58u;

    // 0x31ca58: 0x41c02  srl         $v1, $a0, 16
    ctx->pc = 0x31ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x31ca5c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x31ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x31ca60: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31ca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x31ca64: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x31ca64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x31ca68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31ca68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31ca6c: 0x3084ff00  andi        $a0, $a0, 0xFF00
    ctx->pc = 0x31ca6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x31ca70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31ca70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31ca74: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x31ca74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x31ca78: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x31ca78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x31ca7c: 0x3e00008  jr          $ra
    ctx->pc = 0x31CA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA7Cu;
        // 0x31ca80: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CA84u;
    // 0x31ca84: 0x0  nop
    ctx->pc = 0x31ca84u;
    // NOP
    ctx->pc = 0x31ca88u;
}
