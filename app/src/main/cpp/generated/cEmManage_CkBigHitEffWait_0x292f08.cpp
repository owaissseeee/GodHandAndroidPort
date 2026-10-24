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

// Function: cEmManage_CkBigHitEffWait
// Address: 0x292f08 - 0x292f18
void cEmManage_CkBigHitEffWait_0x292f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_CkBigHitEffWait_0x292f08");
#endif

    ctx->pc = 0x292f08u;

    // 0x292f08: 0x80820538  lb          $v0, 0x538($a0)
    ctx->pc = 0x292f08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1336)));
    // 0x292f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x292F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F0Cu;
        // 0x292f10: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292F14u;
    // 0x292f14: 0x0  nop
    ctx->pc = 0x292f14u;
    // NOP
    ctx->pc = 0x292f18u;
}
