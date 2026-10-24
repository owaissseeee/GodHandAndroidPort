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

// Function: func_0034C8F0
// Address: 0x34c8f0 - 0x34c930
void func_0034C8F0_0x34c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034C8F0_0x34c8f0");
#endif

    ctx->pc = 0x34c8f0u;

    // 0x34c8f0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x34c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34c8f4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x34c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c8f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c8fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c900: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c904: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34c904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34c908: 0x24841320  addiu       $a0, $a0, 0x1320
    ctx->pc = 0x34c908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4896));
    // 0x34c90c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x34c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x34c910: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34C910u;
    {
        const bool branch_taken_0x34c910 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x34C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C910u;
        // 0x34c914: 0x461821  addu        $v1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c910) {
            ctx->pc = 0x34C91Cu;
            goto label_34c91c;
        }
    }
    ctx->pc = 0x34C918u;
    // 0x34c918: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x34c918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_34c91c:
    // 0x34c91c: 0x3e00008  jr          $ra
    ctx->pc = 0x34C91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C924u;
    // 0x34c924: 0x0  nop
    ctx->pc = 0x34c924u;
    // NOP
    // 0x34c928: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34c928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34c92c: 0x0  nop
    ctx->pc = 0x34c92cu;
    // NOP
    ctx->pc = 0x34c930u;
}
