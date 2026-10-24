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

// Function: sceSifCheckStatRpc
// Address: 0x3b3328 - 0x3b3368
void sceSifCheckStatRpc_0x3b3328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifCheckStatRpc_0x3b3328");
#endif

    ctx->pc = 0x3b3328u;

    // 0x3b3328: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3b3328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b332c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B332Cu;
    {
        const bool branch_taken_0x3b332c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b332c) {
            ctx->pc = 0x3B3354u;
            goto label_3b3354;
        }
    }
    ctx->pc = 0x3B3334u;
    // 0x3b3334: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3b3334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b3338: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x3b3338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3b333c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B333Cu;
    {
        const bool branch_taken_0x3b333c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b333c) {
            ctx->pc = 0x3B3354u;
            goto label_3b3354;
        }
    }
    ctx->pc = 0x3B3344u;
    // 0x3b3344: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x3b3344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3b3348: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b3348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b334c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B334Cu;
    {
        const bool branch_taken_0x3b334c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b334c) {
            ctx->pc = 0x3B335Cu;
            goto label_3b335c;
        }
    }
    ctx->pc = 0x3B3354u;
label_3b3354:
    // 0x3b3354: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3354u;
        // 0x3b3358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B335Cu;
label_3b335c:
    // 0x3b335c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B335Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B335Cu;
        // 0x3b3360: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B335Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3364u;
    // 0x3b3364: 0x0  nop
    ctx->pc = 0x3b3364u;
    // NOP
    ctx->pc = 0x3b3368u;
}
