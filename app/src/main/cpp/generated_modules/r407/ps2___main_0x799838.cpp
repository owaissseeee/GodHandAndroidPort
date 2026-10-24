#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r407_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r407
{
// Function: __main
// Address: 0x799838 - 0x799858
void ps2___main_0x799838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799838");
#endif

    ctx->pc = 0x799838u;

    // 0x799838: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79983c: 0x8c629b04  lw          $v0, -0x64FC($v1)
    ctx->pc = 0x79983cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799B04u));
    // 0x799840: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799840u;
    {
        const bool branch_taken_0x799840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799840u;
        // 0x799844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799840) {
            ctx->pc = 0x799850u;
            goto label_799850;
        }
    }
    ctx->pc = 0x799848u;
    // 0x799848: 0x81e65e2  j           func_799788
    ctx->pc = 0x799848u;
    ctx->pc = 0x79984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799848u;
    // 0x79984c: 0xac629b04  sw          $v0, -0x64FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941444), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799788u, 0x799848u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799850u;
label_799850:
    // 0x799850: 0x3e00008  jr          $ra
    ctx->pc = 0x799850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799858u;
}
} // namespace gh_r407
