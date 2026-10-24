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

// Function: cOl29_setOpen
// Address: 0x17f9b0 - 0x17f9d8
void cOl29_setOpen_0x17f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl29_setOpen_0x17f9b0");
#endif

    ctx->pc = 0x17f9b0u;

    // 0x17f9b0: 0x90820764  lbu         $v0, 0x764($a0)
    ctx->pc = 0x17f9b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1892)));
    // 0x17f9b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F9B4u;
    {
        const bool branch_taken_0x17f9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9B4u;
        // 0x17f9b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9b4) {
            ctx->pc = 0x17F9CCu;
            goto label_17f9cc;
        }
    }
    ctx->pc = 0x17F9BCu;
    // 0x17f9bc: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x17f9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f9c0: 0xa08202f4  sb          $v0, 0x2F4($a0)
    ctx->pc = 0x17f9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x17f9c4: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x17f9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f9c8: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x17f9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_17f9cc:
    // 0x17f9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x17F9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F9D4u;
    // 0x17f9d4: 0x0  nop
    ctx->pc = 0x17f9d4u;
    // NOP
    ctx->pc = 0x17f9d8u;
}
