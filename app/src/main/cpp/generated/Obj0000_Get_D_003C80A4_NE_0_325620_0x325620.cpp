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

// Function: Obj0000_Get_D_003C80A4_NE_0_325620
// Address: 0x325620 - 0x325638
void Obj0000_Get_D_003C80A4_NE_0_325620_0x325620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_D_003C80A4_NE_0_325620_0x325620");
#endif

    ctx->pc = 0x325620u;

    // 0x325620: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x325620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x325624: 0x8c6280a4  lw          $v0, -0x7F5C($v1)
    ctx->pc = 0x325624u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C80A4u));
    // 0x325628: 0x3e00008  jr          $ra
    ctx->pc = 0x325628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325628u;
        // 0x32562c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325630u;
    // 0x325630: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x325630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x325634: 0x0  nop
    ctx->pc = 0x325634u;
    // NOP
    ctx->pc = 0x325638u;
}
