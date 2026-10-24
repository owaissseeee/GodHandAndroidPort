#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r006_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r006
{
// Function: __main
// Address: 0x79a470 - 0x79a490
void ps2___main_0x79a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79a470");
#endif

    ctx->pc = 0x79a470u;

    // 0x79a470: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a474: 0x8c62ab04  lw          $v0, -0x54FC($v1)
    ctx->pc = 0x79a474u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79AB04u));
    // 0x79a478: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A478u;
    {
        const bool branch_taken_0x79a478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A478u;
        // 0x79a47c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a478) {
            ctx->pc = 0x79A488u;
            goto label_79a488;
        }
    }
    ctx->pc = 0x79A480u;
    // 0x79a480: 0x81e68f0  j           func_79A3C0
    ctx->pc = 0x79A480u;
    ctx->pc = 0x79A484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A480u;
    // 0x79a484: 0xac62ab04  sw          $v0, -0x54FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945540), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A3C0u, 0x79A480u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79A488u;
label_79a488:
    // 0x79a488: 0x3e00008  jr          $ra
    ctx->pc = 0x79A488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A490u;
}
} // namespace gh_r006
