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

// Function: func_001FE660
// Address: 0x1fe660 - 0x1fe698
void func_001FE660_0x1fe660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FE660_0x1fe660");
#endif

    switch (ctx->pc) {
        case 0x1fe670u: goto label_1fe670;
        default: break;
    }

    ctx->pc = 0x1fe660u;

    // 0x1fe660: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1fe660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1fe664: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fe664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe668: 0x2443c380  addiu       $v1, $v0, -0x3C80
    ctx->pc = 0x1fe668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951808));
    // 0x1fe66c: 0x0  nop
    ctx->pc = 0x1fe66cu;
    // NOP
label_1fe670:
    // 0x1fe670: 0x9062002e  lbu         $v0, 0x2E($v1)
    ctx->pc = 0x1fe670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x1fe674: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE674u;
    {
        const bool branch_taken_0x1fe674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE674u;
        // 0x1fe678: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe674) {
            ctx->pc = 0x1FE684u;
            goto label_1fe684;
        }
    }
    ctx->pc = 0x1FE67Cu;
    // 0x1fe67c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE67Cu;
        // 0x1fe680: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE684u;
label_1fe684:
    // 0x1fe684: 0x2c820200  sltiu       $v0, $a0, 0x200
    ctx->pc = 0x1fe684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1fe688: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FE688u;
    {
        const bool branch_taken_0x1fe688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE688u;
        // 0x1fe68c: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe688) {
            ctx->pc = 0x1FE670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe670;
        }
    }
    ctx->pc = 0x1FE690u;
    // 0x1fe690: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE690u;
        // 0x1fe694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE698u;
}
