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

// Function: cSceAtManager_SetDoorFunc
// Address: 0x2c2728 - 0x2c2750
void cSceAtManager_SetDoorFunc_0x2c2728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_SetDoorFunc_0x2c2728");
#endif

    ctx->pc = 0x2c2728u;

    // 0x2c2728: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2728u;
    {
        const bool branch_taken_0x2c2728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2728u;
        // 0x2c272c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2728) {
            ctx->pc = 0x2C2744u;
            goto label_2c2744;
        }
    }
    ctx->pc = 0x2C2730u;
    // 0x2c2730: 0x90a30035  lbu         $v1, 0x35($a1)
    ctx->pc = 0x2c2730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 53)));
    // 0x2c2734: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2734u;
    {
        const bool branch_taken_0x2c2734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c2734) {
            ctx->pc = 0x2C2744u;
            goto label_2c2744;
        }
    }
    ctx->pc = 0x2C273Cu;
    // 0x2c273c: 0xaca70070  sw          $a3, 0x70($a1)
    ctx->pc = 0x2c273cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 7));
    // 0x2c2740: 0xaca60074  sw          $a2, 0x74($a1)
    ctx->pc = 0x2c2740u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 6));
label_2c2744:
    // 0x2c2744: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C274Cu;
    // 0x2c274c: 0x0  nop
    ctx->pc = 0x2c274cu;
    // NOP
    ctx->pc = 0x2c2750u;
}
