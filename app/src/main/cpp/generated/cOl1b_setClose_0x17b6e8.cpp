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

// Function: cOl1b_setClose
// Address: 0x17b6e8 - 0x17b718
void cOl1b_setClose_0x17b6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl1b_setClose_0x17b6e8");
#endif

    ctx->pc = 0x17b6e8u;

    // 0x17b6e8: 0x90830601  lbu         $v1, 0x601($a0)
    ctx->pc = 0x17b6e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1537)));
    // 0x17b6ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b6f0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B6F0u;
    {
        const bool branch_taken_0x17b6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6F0u;
        // 0x17b6f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6f0) {
            ctx->pc = 0x17B70Cu;
            goto label_17b70c;
        }
    }
    ctx->pc = 0x17B6F8u;
    // 0x17b6f8: 0xa0830600  sb          $v1, 0x600($a0)
    ctx->pc = 0x17b6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1536), (uint8_t)GPR_U32(ctx, 3));
    // 0x17b6fc: 0xa08202f4  sb          $v0, 0x2F4($a0)
    ctx->pc = 0x17b6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x17b700: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x17b700u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b704: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x17b704u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b708: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x17b708u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_17b70c:
    // 0x17b70c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B714u;
    // 0x17b714: 0x0  nop
    ctx->pc = 0x17b714u;
    // NOP
    ctx->pc = 0x17b718u;
}
