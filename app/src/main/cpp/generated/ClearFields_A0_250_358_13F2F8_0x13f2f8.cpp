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

// Function: ClearFields_A0_250_358_13F2F8
// Address: 0x13f2f8 - 0x13f330
void ClearFields_A0_250_358_13F2F8_0x13f2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearFields_A0_250_358_13F2F8_0x13f2f8");
#endif

    switch (ctx->pc) {
        case 0x13f308u: goto label_13f308;
        default: break;
    }

    ctx->pc = 0x13f2f8u;

    // 0x13f2f8: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x13f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x13f2fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13f2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f300: 0x24860250  addiu       $a2, $a0, 0x250
    ctx->pc = 0x13f300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x13f304: 0x0  nop
    ctx->pc = 0x13f304u;
    // NOP
label_13f308:
    // 0x13f308: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x13f308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13f30c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13f30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13f310: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x13f310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x13f314: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x13f314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13f318: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x13f318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x13f31c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13F31Cu;
    {
        const bool branch_taken_0x13f31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F31Cu;
        // 0x13f320: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f31c) {
            ctx->pc = 0x13F308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f308;
        }
    }
    ctx->pc = 0x13F324u;
    // 0x13f324: 0x3e00008  jr          $ra
    ctx->pc = 0x13F324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F324u;
        // 0x13f328: 0xa0800358  sb          $zero, 0x358($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 856), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F32Cu;
    // 0x13f32c: 0x0  nop
    ctx->pc = 0x13f32cu;
    // NOP
    ctx->pc = 0x13f330u;
}
