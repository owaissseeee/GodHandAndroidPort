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

// Function: func_003B2058
// Address: 0x3b2058 - 0x3b2080
void func_003B2058_0x3b2058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B2058_0x3b2058");
#endif

    ctx->pc = 0x3b2058u;

    // 0x3b2058: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b2058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3b205c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3b205cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3b2060: 0x2442e6c0  addiu       $v0, $v0, -0x1940
    ctx->pc = 0x3b2060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960832));
    // 0x3b2064: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b2064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3b2068: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2068u;
        // 0x3b206c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2070u;
    // 0x3b2070: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3b2070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3b2074: 0x0  nop
    ctx->pc = 0x3b2074u;
    // NOP
    // 0x3b2078: 0x244200d8  addiu       $v0, $v0, 0xD8
    ctx->pc = 0x3b2078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x3b207c: 0x0  nop
    ctx->pc = 0x3b207cu;
    // NOP
    ctx->pc = 0x3b2080u;
}
