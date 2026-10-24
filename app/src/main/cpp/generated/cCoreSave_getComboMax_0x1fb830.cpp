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

// Function: cCoreSave_getComboMax
// Address: 0x1fb830 - 0x1fb868
void cCoreSave_getComboMax_0x1fb830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getComboMax_0x1fb830");
#endif

    ctx->pc = 0x1fb830u;

    // 0x1fb830: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fb830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb834: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB834u;
    {
        const bool branch_taken_0x1fb834 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB834u;
        // 0x1fb838: 0x2ca20006  sltiu       $v0, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb834) {
            ctx->pc = 0x1FB844u;
            goto label_1fb844;
        }
    }
    ctx->pc = 0x1FB83Cu;
    // 0x1fb83c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB83Cu;
        // 0x1fb840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB844u;
label_1fb844:
    // 0x1fb844: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB844u;
    {
        const bool branch_taken_0x1fb844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB844u;
        // 0x1fb848: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb844) {
            ctx->pc = 0x1FB85Cu;
            goto label_1fb85c;
        }
    }
    ctx->pc = 0x1FB84Cu;
    // 0x1fb84c: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x1fb84cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1fb850: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1fb850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fb854: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB854u;
        // 0x1fb858: 0x8c6201d0  lw          $v0, 0x1D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 464)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB85Cu;
label_1fb85c:
    // 0x1fb85c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB85Cu;
        // 0x1fb860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB864u;
    // 0x1fb864: 0x0  nop
    ctx->pc = 0x1fb864u;
    // NOP
    ctx->pc = 0x1fb868u;
}
