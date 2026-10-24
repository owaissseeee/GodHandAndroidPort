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

// Function: cOl26_setOpen
// Address: 0x17f1f0 - 0x17f218
void cOl26_setOpen_0x17f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl26_setOpen_0x17f1f0");
#endif

    ctx->pc = 0x17f1f0u;

    // 0x17f1f0: 0x90820600  lbu         $v0, 0x600($a0)
    ctx->pc = 0x17f1f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1536)));
    // 0x17f1f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F1F4u;
    {
        const bool branch_taken_0x17f1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1F4u;
        // 0x17f1f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1f4) {
            ctx->pc = 0x17F20Cu;
            goto label_17f20c;
        }
    }
    ctx->pc = 0x17F1FCu;
    // 0x17f1fc: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x17f1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f200: 0xa08202f4  sb          $v0, 0x2F4($a0)
    ctx->pc = 0x17f200u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x17f204: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x17f204u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f208: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x17f208u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_17f20c:
    // 0x17f20c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F214u;
    // 0x17f214: 0x0  nop
    ctx->pc = 0x17f214u;
    // NOP
    ctx->pc = 0x17f218u;
}
