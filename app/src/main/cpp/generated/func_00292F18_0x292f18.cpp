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

// Function: func_00292F18
// Address: 0x292f18 - 0x292f38
void func_00292F18_0x292f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00292F18_0x292f18");
#endif

    ctx->pc = 0x292f18u;

    // 0x292f18: 0x80820539  lb          $v0, 0x539($a0)
    ctx->pc = 0x292f18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1337)));
    // 0x292f1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292F1Cu;
    {
        const bool branch_taken_0x292f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F1Cu;
        // 0x292f20: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f1c) {
            ctx->pc = 0x292F30u;
            goto label_292f30;
        }
    }
    ctx->pc = 0x292F24u;
    // 0x292f24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292f28: 0x3e00008  jr          $ra
    ctx->pc = 0x292F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F28u;
        // 0x292f2c: 0xa0830539  sb          $v1, 0x539($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1337), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292F30u;
label_292f30:
    // 0x292f30: 0x3e00008  jr          $ra
    ctx->pc = 0x292F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F30u;
        // 0x292f34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292F38u;
}
