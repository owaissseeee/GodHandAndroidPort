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

// Function: func_00355790
// Address: 0x355790 - 0x3557b0
void func_00355790_0x355790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00355790_0x355790");
#endif

    ctx->pc = 0x355790u;

    // 0x355790: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x355790u;
    {
        const bool branch_taken_0x355790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x355794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355790u;
        // 0x355794: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355790) {
            ctx->pc = 0x3557A4u;
            goto label_3557a4;
        }
    }
    ctx->pc = 0x355798u;
    // 0x355798: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x355798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x35579c: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x35579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x3557a0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3557a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3557a4:
    // 0x3557a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3557A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3557A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3557ACu;
    // 0x3557ac: 0x0  nop
    ctx->pc = 0x3557acu;
    // NOP
    ctx->pc = 0x3557b0u;
}
