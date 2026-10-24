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

// Function: func_00380870
// Address: 0x380870 - 0x3808a0
void func_00380870_0x380870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00380870_0x380870");
#endif

    ctx->pc = 0x380870u;

    // 0x380870: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x380870u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x380874: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x380874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x380878: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x380878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x38087c: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x38087cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x380880: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x380880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x380884: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x380884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x380888: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x380888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x38088c: 0x42602  srl         $a0, $a0, 24
    ctx->pc = 0x38088cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x380890: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x380890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x380894: 0x3e00008  jr          $ra
    ctx->pc = 0x380894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380894u;
        // 0x380898: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38089Cu;
    // 0x38089c: 0x0  nop
    ctx->pc = 0x38089cu;
    // NOP
    ctx->pc = 0x3808a0u;
}
