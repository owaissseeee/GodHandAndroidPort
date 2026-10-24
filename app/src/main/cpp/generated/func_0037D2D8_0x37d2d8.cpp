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

// Function: func_0037D2D8
// Address: 0x37d2d8 - 0x37d310
void func_0037D2D8_0x37d2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D2D8_0x37d2d8");
#endif

    switch (ctx->pc) {
        case 0x37d2e8u: goto label_37d2e8;
        default: break;
    }

    ctx->pc = 0x37d2d8u;

    // 0x37d2d8: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37d2dc: 0x2443cf20  addiu       $v1, $v0, -0x30E0
    ctx->pc = 0x37d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x37d2e0: 0x24640ff0  addiu       $a0, $v1, 0xFF0
    ctx->pc = 0x37d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4080));
    // 0x37d2e4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x37d2e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x76CF20u));
label_37d2e8:
    // 0x37d2e8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x37D2E8u;
    {
        const bool branch_taken_0x37d2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d2e8) {
            ctx->pc = 0x37D2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D2E8u;
            // 0x37d2ec: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D2F8u;
            goto label_37d2f8;
        }
    }
    ctx->pc = 0x37D2F0u;
    // 0x37d2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x37D2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D2F0u;
        // 0x37d2f4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D2F8u;
label_37d2f8:
    // 0x37d2f8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x37d2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x37d2fc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x37D2FCu;
    {
        const bool branch_taken_0x37d2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d2fc) {
            ctx->pc = 0x37D300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D2FCu;
            // 0x37d300: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d2e8;
        }
    }
    ctx->pc = 0x37D304u;
    // 0x37d304: 0x3e00008  jr          $ra
    ctx->pc = 0x37D304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D304u;
        // 0x37d308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D30Cu;
    // 0x37d30c: 0x0  nop
    ctx->pc = 0x37d30cu;
    // NOP
    ctx->pc = 0x37d310u;
}
