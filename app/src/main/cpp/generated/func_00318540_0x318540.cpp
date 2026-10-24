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

// Function: func_00318540
// Address: 0x318540 - 0x318570
void func_00318540_0x318540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00318540_0x318540");
#endif

    ctx->pc = 0x318540u;

    // 0x318540: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x318540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x318544: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x318544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x318548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31854c: 0xac8004d4  sw          $zero, 0x4D4($a0)
    ctx->pc = 0x31854cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1236), GPR_U32(ctx, 0));
    // 0x318550: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x318550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x318554: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x318554u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x318558: 0xac830250  sw          $v1, 0x250($a0)
    ctx->pc = 0x318558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
    // 0x31855c: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x31855cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x318560: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x318560u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x318564: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x318564u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x318568: 0x3e00008  jr          $ra
    ctx->pc = 0x318568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318568u;
        // 0x31856c: 0xac8004d0  sw          $zero, 0x4D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318570u;
}
