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

// Function: func_00343A98
// Address: 0x343a98 - 0x343ad0
void func_00343A98_0x343a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00343A98_0x343a98");
#endif

    ctx->pc = 0x343a98u;

    // 0x343a98: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x343a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x343a9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x343A9Cu;
    {
        const bool branch_taken_0x343a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343a9c) {
            ctx->pc = 0x343AC8u;
            goto label_343ac8;
        }
    }
    ctx->pc = 0x343AA4u;
    // 0x343aa4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x343aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x343aa8: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x343aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x343aac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x343aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x343ab0: 0x8c6372f0  lw          $v1, 0x72F0($v1)
    ctx->pc = 0x343ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29424)));
    // 0x343ab4: 0x600008  jr          $v1
    ctx->pc = 0x343AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x343AC0u: goto label_343ac0;
            case 0x343AC8u: goto label_343ac8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343AB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x343ABCu;
    // 0x343abc: 0x0  nop
    ctx->pc = 0x343abcu;
    // NOP
label_343ac0:
    // 0x343ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x343AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343AC0u;
        // 0x343ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343AC8u;
label_343ac8:
    // 0x343ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x343AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343AC8u;
        // 0x343acc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343AD0u;
}
