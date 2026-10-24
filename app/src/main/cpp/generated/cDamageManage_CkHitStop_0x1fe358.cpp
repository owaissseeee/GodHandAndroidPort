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

// Function: cDamageManage_CkHitStop
// Address: 0x1fe358 - 0x1fe370
void cDamageManage_CkHitStop_0x1fe358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDamageManage_CkHitStop_0x1fe358");
#endif

    ctx->pc = 0x1fe358u;

    // 0x1fe358: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fe358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fe35c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fe35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fe360: 0x8c822cd0  lw          $v0, 0x2CD0($a0)
    ctx->pc = 0x1fe360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x1fe364: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE364u;
        // 0x1fe368: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE36Cu;
    // 0x1fe36c: 0x0  nop
    ctx->pc = 0x1fe36cu;
    // NOP
    ctx->pc = 0x1fe370u;
}
