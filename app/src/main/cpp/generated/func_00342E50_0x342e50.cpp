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

// Function: func_00342E50
// Address: 0x342e50 - 0x342e80
void func_00342E50_0x342e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00342E50_0x342e50");
#endif

    ctx->pc = 0x342e50u;

    // 0x342e50: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x342e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x342e54: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x342e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x342e58: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x342e58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x342e5c: 0x24040600  addiu       $a0, $zero, 0x600
    ctx->pc = 0x342e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x342e60: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x342e60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x342e64: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x342e64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x342e68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x342e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x342e6c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x342e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x342e70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x342e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342e74: 0x3e00008  jr          $ra
    ctx->pc = 0x342E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E74u;
        // 0x342e78: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342E7Cu;
    // 0x342e7c: 0x0  nop
    ctx->pc = 0x342e7cu;
    // NOP
    ctx->pc = 0x342e80u;
}
