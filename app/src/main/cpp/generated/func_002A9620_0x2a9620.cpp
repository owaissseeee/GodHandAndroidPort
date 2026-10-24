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

// Function: func_002A9620
// Address: 0x2a9620 - 0x2a9648
void func_002A9620_0x2a9620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A9620_0x2a9620");
#endif

    ctx->pc = 0x2a9620u;

    // 0x2a9620: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2a9620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a9624: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2a9624u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2a9628: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2a9628u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2a962c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x2a962cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x2a9630: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2a9630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a9634: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A9634u;
    {
        const bool branch_taken_0x2a9634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9634) {
            ctx->pc = 0x2A9638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9634u;
            // 0x2a9638: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A963Cu;
            goto label_2a963c;
        }
    }
    ctx->pc = 0x2A963Cu;
label_2a963c:
    // 0x2a963c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A963Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A963Cu;
        // 0x2a9640: 0xacc50008  sw          $a1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A963Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9644u;
    // 0x2a9644: 0x0  nop
    ctx->pc = 0x2a9644u;
    // NOP
    ctx->pc = 0x2a9648u;
}
