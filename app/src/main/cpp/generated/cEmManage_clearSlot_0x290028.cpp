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

// Function: cEmManage_clearSlot
// Address: 0x290028 - 0x290048
void cEmManage_clearSlot_0x290028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_clearSlot_0x290028");
#endif

    ctx->pc = 0x290028u;

    // 0x290028: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x290028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29002c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x29002cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x290030: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x290030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x290034: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x290034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x290038: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x290038u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x29003c: 0x3e00008  jr          $ra
    ctx->pc = 0x29003Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29003Cu;
        // 0x290040: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29003Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290044u;
    // 0x290044: 0x0  nop
    ctx->pc = 0x290044u;
    // NOP
    ctx->pc = 0x290048u;
}
