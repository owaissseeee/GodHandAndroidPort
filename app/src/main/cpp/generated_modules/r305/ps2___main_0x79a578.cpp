#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: __main
// Address: 0x79a578 - 0x79a598
void ps2___main_0x79a578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79a578");
#endif

    ctx->pc = 0x79a578u;

    // 0x79a578: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a57c: 0x8c62a804  lw          $v0, -0x57FC($v1)
    ctx->pc = 0x79a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79A804u));
    // 0x79a580: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A580u;
    {
        const bool branch_taken_0x79a580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A580u;
        // 0x79a584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a580) {
            ctx->pc = 0x79A590u;
            goto label_79a590;
        }
    }
    ctx->pc = 0x79A588u;
    // 0x79a588: 0x81e6932  j           func_79A4C8
    ctx->pc = 0x79A588u;
    ctx->pc = 0x79A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A588u;
    // 0x79a58c: 0xac62a804  sw          $v0, -0x57FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944772), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A4C8u, 0x79A588u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79A590u;
label_79a590:
    // 0x79a590: 0x3e00008  jr          $ra
    ctx->pc = 0x79A590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A598u;
}
} // namespace gh_r305
