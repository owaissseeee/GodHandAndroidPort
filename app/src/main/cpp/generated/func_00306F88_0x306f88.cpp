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

// Function: func_00306F88
// Address: 0x306f88 - 0x306fc0
void func_00306F88_0x306f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306F88_0x306f88");
#endif

    switch (ctx->pc) {
        case 0x306f98u: goto label_306f98;
        default: break;
    }

    ctx->pc = 0x306f88u;

    // 0x306f88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x306f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306f8c: 0x24830300  addiu       $v1, $a0, 0x300
    ctx->pc = 0x306f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    // 0x306f90: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x306f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x306f94: 0x0  nop
    ctx->pc = 0x306f94u;
    // NOP
label_306f98:
    // 0x306f98: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x306F98u;
    {
        const bool branch_taken_0x306f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306f98) {
            ctx->pc = 0x306F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306F98u;
            // 0x306f9c: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306FACu;
            goto label_306fac;
        }
    }
    ctx->pc = 0x306FA0u;
    // 0x306fa0: 0xa0850008  sb          $a1, 0x8($a0)
    ctx->pc = 0x306fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x306fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x306FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FA4u;
        // 0x306fa8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306FACu;
label_306fac:
    // 0x306fac: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x306facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x306fb0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x306FB0u;
    {
        const bool branch_taken_0x306fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306fb0) {
            ctx->pc = 0x306FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306FB0u;
            // 0x306fb4: 0x90820008  lbu         $v0, 0x8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306f98;
        }
    }
    ctx->pc = 0x306FB8u;
    // 0x306fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x306FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FB8u;
        // 0x306fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306FC0u;
}
