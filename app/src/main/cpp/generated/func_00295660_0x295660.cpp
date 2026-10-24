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

// Function: func_00295660
// Address: 0x295660 - 0x2956a0
void func_00295660_0x295660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00295660_0x295660");
#endif

    switch (ctx->pc) {
        case 0x295670u: goto label_295670;
        default: break;
    }

    ctx->pc = 0x295660u;

    // 0x295660: 0x24830023  addiu       $v1, $a0, 0x23
    ctx->pc = 0x295660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 35));
    // 0x295664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x295664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295668: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x295668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x29566c: 0x0  nop
    ctx->pc = 0x29566cu;
    // NOP
label_295670:
    // 0x295670: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x295670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x295674: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295674u;
    {
        const bool branch_taken_0x295674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295674u;
        // 0x295678: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295674) {
            ctx->pc = 0x295684u;
            goto label_295684;
        }
    }
    ctx->pc = 0x29567Cu;
    // 0x29567c: 0x3e00008  jr          $ra
    ctx->pc = 0x29567Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29567Cu;
        // 0x295680: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29567Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295684u;
label_295684:
    // 0x295684: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x295684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x295688: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x295688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x29568c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29568Cu;
    {
        const bool branch_taken_0x29568c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29568Cu;
        // 0x295690: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29568c) {
            ctx->pc = 0x295670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295670;
        }
    }
    ctx->pc = 0x295694u;
    // 0x295694: 0x3e00008  jr          $ra
    ctx->pc = 0x295694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295694u;
        // 0x295698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29569Cu;
    // 0x29569c: 0x0  nop
    ctx->pc = 0x29569cu;
    // NOP
    ctx->pc = 0x2956a0u;
}
