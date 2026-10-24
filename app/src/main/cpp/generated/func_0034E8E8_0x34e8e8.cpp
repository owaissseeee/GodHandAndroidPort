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

// Function: func_0034E8E8
// Address: 0x34e8e8 - 0x34e928
void func_0034E8E8_0x34e8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034E8E8_0x34e8e8");
#endif

    switch (ctx->pc) {
        case 0x34e8f8u: goto label_34e8f8;
        default: break;
    }

    ctx->pc = 0x34e8e8u;

    // 0x34e8e8: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x34E8E8u;
    {
        const bool branch_taken_0x34e8e8 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x34E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E8E8u;
        // 0x34e8ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e8e8) {
            ctx->pc = 0x34E91Cu;
            goto label_34e91c;
        }
    }
    ctx->pc = 0x34E8F0u;
    // 0x34e8f0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x34e8f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34e8f4: 0x0  nop
    ctx->pc = 0x34e8f4u;
    // NOP
label_34e8f8:
    // 0x34e8f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34e8fc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x34E8FCu;
    {
        const bool branch_taken_0x34e8fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E8FCu;
        // 0x34e900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e8fc) {
            ctx->pc = 0x34E920u;
            goto label_34e920;
        }
    }
    ctx->pc = 0x34E904u;
    // 0x34e904: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x34e904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x34e908: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x34e908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x34e90c: 0x0  nop
    ctx->pc = 0x34e90cu;
    // NOP
    // 0x34e910: 0x0  nop
    ctx->pc = 0x34e910u;
    // NOP
    // 0x34e914: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x34E914u;
    {
        const bool branch_taken_0x34e914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e914) {
            ctx->pc = 0x34E918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E914u;
            // 0x34e918: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34e8f8;
        }
    }
    ctx->pc = 0x34E91Cu;
label_34e91c:
    // 0x34e91c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34e920:
    // 0x34e920: 0x3e00008  jr          $ra
    ctx->pc = 0x34E920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E928u;
}
