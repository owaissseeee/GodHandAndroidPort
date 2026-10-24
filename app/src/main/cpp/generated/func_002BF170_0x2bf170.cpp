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

// Function: func_002BF170
// Address: 0x2bf170 - 0x2bf1a0
void func_002BF170_0x2bf170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BF170_0x2bf170");
#endif

    ctx->pc = 0x2bf170u;

    // 0x2bf170: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2bf170u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf174: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x2bf174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf178: 0xa0800007  sb          $zero, 0x7($a0)
    ctx->pc = 0x2bf178u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf17c: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x2bf17cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf180: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x2bf180u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bf184: 0xa080000a  sb          $zero, 0xA($a0)
    ctx->pc = 0x2bf184u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf188: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x2bf188u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf18c: 0xa080000d  sb          $zero, 0xD($a0)
    ctx->pc = 0x2bf18cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf190: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2bf190u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf194: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x2bf194u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf198: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF198u;
        // 0x2bf19c: 0xa0800002  sb          $zero, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF1A0u;
}
