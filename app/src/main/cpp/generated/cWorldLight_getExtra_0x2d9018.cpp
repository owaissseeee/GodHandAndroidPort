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

// Function: cWorldLight_getExtra
// Address: 0x2d9018 - 0x2d9038
void cWorldLight_getExtra_0x2d9018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cWorldLight_getExtra_0x2d9018");
#endif

    ctx->pc = 0x2d9018u;

    // 0x2d9018: 0x28a60030  slti        $a2, $a1, 0x30
    ctx->pc = 0x2d9018u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2d901c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x2d901cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2d9020: 0xa6100b  movn        $v0, $a1, $a2
    ctx->pc = 0x2d9020u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2d9024: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2d9024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d9028: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2d9028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d902c: 0x24427080  addiu       $v0, $v0, 0x7080
    ctx->pc = 0x2d902cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28800));
    // 0x2d9030: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9030u;
        // 0x2d9034: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9038u;
}
