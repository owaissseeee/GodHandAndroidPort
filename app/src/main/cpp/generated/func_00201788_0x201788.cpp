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

// Function: func_00201788
// Address: 0x201788 - 0x2017a8
void func_00201788_0x201788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00201788_0x201788");
#endif

    ctx->pc = 0x201788u;

    // 0x201788: 0x8c821104  lw          $v0, 0x1104($a0)
    ctx->pc = 0x201788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4356)));
    // 0x20178c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x201790: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201790u;
    {
        const bool branch_taken_0x201790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201790u;
        // 0x201794: 0xac821104  sw          $v0, 0x1104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201790) {
            ctx->pc = 0x2017A0u;
            goto label_2017a0;
        }
    }
    ctx->pc = 0x201798u;
    // 0x201798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20179c: 0xac821104  sw          $v0, 0x1104($a0)
    ctx->pc = 0x20179cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4356), GPR_U32(ctx, 2));
label_2017a0:
    // 0x2017a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2017A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2017A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017A0u;
        // 0x2017a4: 0x8c821104  lw          $v0, 0x1104($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4356)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2017A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2017A8u;
}
