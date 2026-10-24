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

// Function: getLog2
// Address: 0x309d40 - 0x309d88
void getLog2_0x309d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getLog2_0x309d40");
#endif

    switch (ctx->pc) {
        case 0x309d50u: goto label_309d50;
        default: break;
    }

    ctx->pc = 0x309d40u;

    // 0x309d40: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x309D40u;
    {
        const bool branch_taken_0x309d40 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x309D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D40u;
        // 0x309d44: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d40) {
            ctx->pc = 0x309D68u;
            goto label_309d68;
        }
    }
    ctx->pc = 0x309D48u;
    // 0x309d48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x309d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x309d4c: 0x0  nop
    ctx->pc = 0x309d4cu;
    // NOP
label_309d50:
    // 0x309d50: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x309D50u;
    {
        const bool branch_taken_0x309d50 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x309D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D50u;
        // 0x309d54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d50) {
            ctx->pc = 0x309D6Cu;
            goto label_309d6c;
        }
    }
    ctx->pc = 0x309D58u;
    // 0x309d58: 0x641007  srav        $v0, $a0, $v1
    ctx->pc = 0x309d58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x309d5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x309d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x309d60: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x309D60u;
    {
        const bool branch_taken_0x309d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309d60) {
            ctx->pc = 0x309D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309D60u;
            // 0x309d64: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309d50;
        }
    }
    ctx->pc = 0x309D68u;
label_309d68:
    // 0x309d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309d6c:
    // 0x309d6c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x309d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x309d70: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x309d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x309d74: 0x3e00008  jr          $ra
    ctx->pc = 0x309D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D74u;
        // 0x309d78: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309D7Cu;
    // 0x309d7c: 0x0  nop
    ctx->pc = 0x309d7cu;
    // NOP
    // 0x309d80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x309d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x309d84: 0x0  nop
    ctx->pc = 0x309d84u;
    // NOP
    ctx->pc = 0x309d88u;
}
