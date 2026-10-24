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

// Function: Rnd
// Address: 0x31cef8 - 0x31cf30
void Rnd_0x31cef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rnd_0x31cef8");
#endif

    ctx->pc = 0x31cef8u;

    // 0x31cef8: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x31cef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x31cefc: 0x94a47b10  lhu         $a0, 0x7B10($a1)
    ctx->pc = 0x31cefcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747B10u));
    // 0x31cf00: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x31cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31cf04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31cf08: 0x3043ff00  andi        $v1, $v0, 0xFF00
    ctx->pc = 0x31cf08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x31cf0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cf10: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x31cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x31cf14: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x31cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x31cf18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31cf1c: 0xaca27b10  sw          $v0, 0x7B10($a1)
    ctx->pc = 0x31cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 31504), GPR_U32(ctx, 2));
    // 0x31cf20: 0x3e00008  jr          $ra
    ctx->pc = 0x31CF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF20u;
        // 0x31cf24: 0x90a27b10  lbu         $v0, 0x7B10($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 31504)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CF28u;
    // 0x31cf28: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x31cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x31cf2c: 0x0  nop
    ctx->pc = 0x31cf2cu;
    // NOP
    ctx->pc = 0x31cf30u;
}
