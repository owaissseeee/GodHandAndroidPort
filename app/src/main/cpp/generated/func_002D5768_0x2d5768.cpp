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

// Function: func_002D5768
// Address: 0x2d5768 - 0x2d5788
void func_002D5768_0x2d5768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5768_0x2d5768");
#endif

    ctx->pc = 0x2d5768u;

    // 0x2d5768: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d5768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d576c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x2d576cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x2d5770: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2d5770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2d5774: 0xa486001c  sh          $a2, 0x1C($a0)
    ctx->pc = 0x2d5774u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x2d5778: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x2d5778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x2d577c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2d577cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2d5780: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5780u;
        // 0x2d5784: 0xa480000c  sh          $zero, 0xC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5788u;
}
