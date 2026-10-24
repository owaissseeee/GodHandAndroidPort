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

// Function: func_002BF540
// Address: 0x2bf540 - 0x2bf568
void func_002BF540_0x2bf540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BF540_0x2bf540");
#endif

    ctx->pc = 0x2bf540u;

    // 0x2bf540: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x2bf540u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2bf544: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF544u;
    {
        const bool branch_taken_0x2bf544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF544u;
        // 0x2bf548: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf544) {
            ctx->pc = 0x2BF55Cu;
            goto label_2bf55c;
        }
    }
    ctx->pc = 0x2BF54Cu;
    // 0x2bf54c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2bf54cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf550: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2bf550u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf554: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x2bf554u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf558: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2bf558u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_2bf55c:
    // 0x2bf55c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF564u;
    // 0x2bf564: 0x0  nop
    ctx->pc = 0x2bf564u;
    // NOP
    ctx->pc = 0x2bf568u;
}
