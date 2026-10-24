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

// Function: func_002B2B78
// Address: 0x2b2b78 - 0x2b2ba8
void func_002B2B78_0x2b2b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2B78_0x2b2b78");
#endif

    ctx->pc = 0x2b2b78u;

    // 0x2b2b78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b2b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b2b7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2b80: 0xa08300a4  sb          $v1, 0xA4($a0)
    ctx->pc = 0x2b2b80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 164), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b2b84: 0xa0820070  sb          $v0, 0x70($a0)
    ctx->pc = 0x2b2b84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b2b88: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2b2b88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2b2b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2b90: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x2b2b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2b2b94: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x2b2b94u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2b2b98: 0xa080003c  sb          $zero, 0x3C($a0)
    ctx->pc = 0x2b2b98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2b9c: 0xa4850094  sh          $a1, 0x94($a0)
    ctx->pc = 0x2b2b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 148), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b2ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2BA0u;
        // 0x2b2ba4: 0xa4800096  sh          $zero, 0x96($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 150), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2BA8u;
}
