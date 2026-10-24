#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: func_0079B040
// Address: 0x79b040 - 0x79b070
void func_0079B040_0x79b040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B040_0x79b040");
#endif

    ctx->pc = 0x79b040u;

    // 0x79b040: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79b040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79b044: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B044u;
    {
        const bool branch_taken_0x79b044 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x79b044) {
            ctx->pc = 0x79B064u;
            goto label_79b064;
        }
    }
    ctx->pc = 0x79B04Cu;
    // 0x79b04c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B04Cu;
    {
        const bool branch_taken_0x79b04c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B04Cu;
        // 0x79b050: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b04c) {
            ctx->pc = 0x79B064u;
            goto label_79b064;
        }
    }
    ctx->pc = 0x79B054u;
    // 0x79b054: 0x2443cd80  addiu       $v1, $v0, -0x3280
    ctx->pc = 0x79b054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954368));
    // 0x79b058: 0xac40cd80  sw          $zero, -0x3280($v0)
    ctx->pc = 0x79b058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954368), GPR_U32(ctx, 0));
    // 0x79b05c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x79b060: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x79b060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_79b064:
    // 0x79b064: 0x3e00008  jr          $ra
    ctx->pc = 0x79B064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B06Cu;
    // 0x79b06c: 0x0  nop
    ctx->pc = 0x79b06cu;
    // NOP
    ctx->pc = 0x79b070u;
}
} // namespace gh_r022
