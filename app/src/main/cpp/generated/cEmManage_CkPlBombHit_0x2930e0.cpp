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

// Function: cEmManage_CkPlBombHit
// Address: 0x2930e0 - 0x2930f0
void cEmManage_CkPlBombHit_0x2930e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_CkPlBombHit_0x2930e0");
#endif

    ctx->pc = 0x2930e0u;

    // 0x2930e0: 0x8082053b  lb          $v0, 0x53B($a0)
    ctx->pc = 0x2930e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1339)));
    // 0x2930e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2930E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2930E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930E4u;
        // 0x2930e8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2930E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2930ECu;
    // 0x2930ec: 0x0  nop
    ctx->pc = 0x2930ecu;
    // NOP
    ctx->pc = 0x2930f0u;
}
