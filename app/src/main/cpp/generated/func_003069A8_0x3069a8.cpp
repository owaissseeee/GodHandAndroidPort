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

// Function: func_003069A8
// Address: 0x3069a8 - 0x3069e8
void func_003069A8_0x3069a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003069A8_0x3069a8");
#endif

    ctx->pc = 0x3069a8u;

    // 0x3069a8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x3069a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x3069ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3069acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3069b0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3069b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3069b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3069B4u;
    {
        const bool branch_taken_0x3069b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3069B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069B4u;
        // 0x3069b8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069b4) {
            ctx->pc = 0x3069C4u;
            goto label_3069c4;
        }
    }
    ctx->pc = 0x3069BCu;
    // 0x3069bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3069BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3069C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069BCu;
        // 0x3069c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3069BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3069C4u;
label_3069c4:
    // 0x3069c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3069c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3069c8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3069c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3069cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3069CCu;
    {
        const bool branch_taken_0x3069cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3069D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069CCu;
        // 0x3069d0: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069cc) {
            ctx->pc = 0x3069E0u;
            goto label_3069e0;
        }
    }
    ctx->pc = 0x3069D4u;
    // 0x3069d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3069d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3069d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3069D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3069DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069D8u;
        // 0x3069dc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3069D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3069E0u;
label_3069e0:
    // 0x3069e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3069E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3069E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069E0u;
        // 0x3069e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3069E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3069E8u;
}
