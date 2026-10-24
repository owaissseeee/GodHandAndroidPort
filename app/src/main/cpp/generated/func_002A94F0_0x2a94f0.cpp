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

// Function: func_002A94F0
// Address: 0x2a94f0 - 0x2a9528
void func_002A94F0_0x2a94f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A94F0_0x2a94f0");
#endif

    ctx->pc = 0x2a94f0u;

    // 0x2a94f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a94f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a94f4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2a94f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a94f8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2a94f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2a94fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a94fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a9500: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a9500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2a9504: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2a9504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a9508: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x2a9508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x2a950c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a950cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a9510: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2a9510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a9514: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x2a9514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x2a9518: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2a9518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x2a951c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a951cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a9520: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9520u;
        // 0x2a9524: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9528u;
}
