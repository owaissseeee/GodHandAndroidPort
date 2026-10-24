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

// Function: func_003078E0
// Address: 0x3078e0 - 0x307918
void func_003078E0_0x3078e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003078E0_0x3078e0");
#endif

    ctx->pc = 0x3078e0u;

    // 0x3078e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3078E0u;
    {
        const bool branch_taken_0x3078e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3078E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078E0u;
        // 0x3078e4: 0x3083ff00  andi        $v1, $a0, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3078e0) {
            ctx->pc = 0x3078F4u;
            goto label_3078f4;
        }
    }
    ctx->pc = 0x3078E8u;
    // 0x3078e8: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x3078e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x3078ec: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3078ECu;
    {
        const bool branch_taken_0x3078ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3078F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078ECu;
        // 0x3078f0: 0x28620601  slti        $v0, $v1, 0x601 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1537) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3078ec) {
            ctx->pc = 0x3078FCu;
            goto label_3078fc;
        }
    }
    ctx->pc = 0x3078F4u;
label_3078f4:
    // 0x3078f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3078F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3078F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078F4u;
        // 0x3078f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3078F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3078FCu;
label_3078fc:
    // 0x3078fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3078FCu;
    {
        const bool branch_taken_0x3078fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078FCu;
        // 0x307900: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3078fc) {
            ctx->pc = 0x30790Cu;
            goto label_30790c;
        }
    }
    ctx->pc = 0x307904u;
    // 0x307904: 0x3e00008  jr          $ra
    ctx->pc = 0x307904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307904u;
        // 0x307908: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30790Cu;
label_30790c:
    // 0x30790c: 0x3e00008  jr          $ra
    ctx->pc = 0x30790Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30790Cu;
        // 0x307910: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30790Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307914u;
    // 0x307914: 0x0  nop
    ctx->pc = 0x307914u;
    // NOP
    ctx->pc = 0x307918u;
}
