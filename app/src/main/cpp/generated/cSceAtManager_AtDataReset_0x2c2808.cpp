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

// Function: cSceAtManager_AtDataReset
// Address: 0x2c2808 - 0x2c2838
void cSceAtManager_AtDataReset_0x2c2808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_AtDataReset_0x2c2808");
#endif

    ctx->pc = 0x2c2808u;

    // 0x2c2808: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2808u;
    {
        const bool branch_taken_0x2c2808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2808) {
            ctx->pc = 0x2C282Cu;
            goto label_2c282c;
        }
    }
    ctx->pc = 0x2C2810u;
    // 0x2c2810: 0x90a2004e  lbu         $v0, 0x4E($a1)
    ctx->pc = 0x2c2810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 78)));
    // 0x2c2814: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2814u;
    {
        const bool branch_taken_0x2c2814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2814) {
            ctx->pc = 0x2C2818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2814u;
            // 0x2c2818: 0xaca0003c  sw          $zero, 0x3C($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2828u;
            goto label_2c2828;
        }
    }
    ctx->pc = 0x2C281Cu;
    // 0x2c281c: 0xa0a2003b  sb          $v0, 0x3B($a1)
    ctx->pc = 0x2c281cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 59), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c2820: 0xa0a0004e  sb          $zero, 0x4E($a1)
    ctx->pc = 0x2c2820u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2824: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x2c2824u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
label_2c2828:
    // 0x2c2828: 0xa0a00044  sb          $zero, 0x44($a1)
    ctx->pc = 0x2c2828u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 68), (uint8_t)GPR_U32(ctx, 0));
label_2c282c:
    // 0x2c282c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C282Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C282Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2834u;
    // 0x2c2834: 0x0  nop
    ctx->pc = 0x2c2834u;
    // NOP
    ctx->pc = 0x2c2838u;
}
