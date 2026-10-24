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

// Function: func_0031D098
// Address: 0x31d098 - 0x31d0c0
void func_0031D098_0x31d098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031D098_0x31d098");
#endif

    ctx->pc = 0x31d098u;

    // 0x31d098: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x31d098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31d09c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x31d09cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x31d0a0: 0x34a5660d  ori         $a1, $a1, 0x660D
    ctx->pc = 0x31d0a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26125);
    // 0x31d0a4: 0x3c033c6e  lui         $v1, 0x3C6E
    ctx->pc = 0x31d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15470 << 16));
    // 0x31d0a8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x31d0a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31d0ac: 0x3463f35f  ori         $v1, $v1, 0xF35F
    ctx->pc = 0x31d0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62303);
    // 0x31d0b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31d0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x31D0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0B4u;
        // 0x31d0b8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D0BCu;
    // 0x31d0bc: 0x0  nop
    ctx->pc = 0x31d0bcu;
    // NOP
    ctx->pc = 0x31d0c0u;
}
