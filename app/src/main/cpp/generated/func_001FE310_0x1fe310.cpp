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

// Function: func_001FE310
// Address: 0x1fe310 - 0x1fe348
void func_001FE310_0x1fe310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FE310_0x1fe310");
#endif

    switch (ctx->pc) {
        case 0x1fe318u: goto label_1fe318;
        default: break;
    }

    ctx->pc = 0x1fe310u;

    // 0x1fe310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fe310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe314: 0x24833c00  addiu       $v1, $a0, 0x3C00
    ctx->pc = 0x1fe314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15360));
label_1fe318:
    // 0x1fe318: 0x9062004a  lbu         $v0, 0x4A($v1)
    ctx->pc = 0x1fe318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 74)));
    // 0x1fe31c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE31Cu;
    {
        const bool branch_taken_0x1fe31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE31Cu;
        // 0x1fe320: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe31c) {
            ctx->pc = 0x1FE32Cu;
            goto label_1fe32c;
        }
    }
    ctx->pc = 0x1FE324u;
    // 0x1fe324: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE324u;
        // 0x1fe328: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE32Cu;
label_1fe32c:
    // 0x1fe32c: 0x2ca20100  sltiu       $v0, $a1, 0x100
    ctx->pc = 0x1fe32cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1fe330: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FE330u;
    {
        const bool branch_taken_0x1fe330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE330u;
        // 0x1fe334: 0x24630070  addiu       $v1, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe330) {
            ctx->pc = 0x1FE318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe318;
        }
    }
    ctx->pc = 0x1FE338u;
    // 0x1fe338: 0x3402ac60  ori         $v0, $zero, 0xAC60
    ctx->pc = 0x1fe338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44128);
    // 0x1fe33c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE33Cu;
        // 0x1fe340: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE344u;
    // 0x1fe344: 0x0  nop
    ctx->pc = 0x1fe344u;
    // NOP
    ctx->pc = 0x1fe348u;
}
