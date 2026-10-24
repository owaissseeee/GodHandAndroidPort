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

// Function: cOmDoor2_setOpen
// Address: 0x1bdbf8 - 0x1bdc20
void cOmDoor2_setOpen_0x1bdbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmDoor2_setOpen_0x1bdbf8");
#endif

    ctx->pc = 0x1bdbf8u;

    // 0x1bdbf8: 0x90820774  lbu         $v0, 0x774($a0)
    ctx->pc = 0x1bdbf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1908)));
    // 0x1bdbfc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDBFCu;
    {
        const bool branch_taken_0x1bdbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBFCu;
        // 0x1bdc00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdbfc) {
            ctx->pc = 0x1BDC14u;
            goto label_1bdc14;
        }
    }
    ctx->pc = 0x1BDC04u;
    // 0x1bdc04: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1bdc04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bdc08: 0xa08202f4  sb          $v0, 0x2F4($a0)
    ctx->pc = 0x1bdc08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bdc0c: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1bdc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bdc10: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1bdc10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_1bdc14:
    // 0x1bdc14: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDC1Cu;
    // 0x1bdc1c: 0x0  nop
    ctx->pc = 0x1bdc1cu;
    // NOP
    ctx->pc = 0x1bdc20u;
}
