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

// Function: func_002949C8
// Address: 0x2949c8 - 0x2949e8
void func_002949C8_0x2949c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002949C8_0x2949c8");
#endif

    ctx->pc = 0x2949c8u;

    // 0x2949c8: 0x8082053e  lb          $v0, 0x53E($a0)
    ctx->pc = 0x2949c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1342)));
    // 0x2949cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2949CCu;
    {
        const bool branch_taken_0x2949cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2949D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949CCu;
        // 0x2949d0: 0x9083053e  lbu         $v1, 0x53E($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1342)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2949cc) {
            ctx->pc = 0x2949DCu;
            goto label_2949dc;
        }
    }
    ctx->pc = 0x2949D4u;
    // 0x2949d4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2949d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2949d8: 0xa082053e  sb          $v0, 0x53E($a0)
    ctx->pc = 0x2949d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1342), (uint8_t)GPR_U32(ctx, 2));
label_2949dc:
    // 0x2949dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2949DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2949DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2949E4u;
    // 0x2949e4: 0x0  nop
    ctx->pc = 0x2949e4u;
    // NOP
    ctx->pc = 0x2949e8u;
}
