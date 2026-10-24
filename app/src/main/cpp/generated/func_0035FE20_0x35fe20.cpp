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

// Function: func_0035FE20
// Address: 0x35fe20 - 0x35fe60
void func_0035FE20_0x35fe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035FE20_0x35fe20");
#endif

    ctx->pc = 0x35fe20u;

    // 0x35fe20: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x35fe20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35fe24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35fe28: 0xa73818  mult        $a3, $a1, $a3
    ctx->pc = 0x35fe28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x35fe2c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x35fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35fe30: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x35fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35fe34: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x35fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x35fe38: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x35fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x35fe3c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x35fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x35fe40: 0x3e00008  jr          $ra
    ctx->pc = 0x35FE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FE40u;
        // 0x35fe44: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FE48u;
    // 0x35fe48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35fe48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35fe4c: 0x0  nop
    ctx->pc = 0x35fe4cu;
    // NOP
    // 0x35fe50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35fe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35fe54: 0x0  nop
    ctx->pc = 0x35fe54u;
    // NOP
    // 0x35fe58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35fe58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35fe5c: 0x0  nop
    ctx->pc = 0x35fe5cu;
    // NOP
    ctx->pc = 0x35fe60u;
}
