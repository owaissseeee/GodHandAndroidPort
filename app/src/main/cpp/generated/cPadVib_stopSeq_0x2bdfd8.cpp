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

// Function: cPadVib_stopSeq
// Address: 0x2bdfd8 - 0x2bdff8
void cPadVib_stopSeq_0x2bdfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cPadVib_stopSeq_0x2bdfd8");
#endif

    ctx->pc = 0x2bdfd8u;

    // 0x2bdfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFD8u;
        // 0x2bdfdc: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDFE0u;
    // 0x2bdfe0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bdfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bdfe4: 0x0  nop
    ctx->pc = 0x2bdfe4u;
    // NOP
    // 0x2bdfe8: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x2bdfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2bdfec: 0x0  nop
    ctx->pc = 0x2bdfecu;
    // NOP
    // 0x2bdff0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bdff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bdff4: 0x0  nop
    ctx->pc = 0x2bdff4u;
    // NOP
    ctx->pc = 0x2bdff8u;
}
