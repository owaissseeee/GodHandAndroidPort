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

// Function: func_00355450
// Address: 0x355450 - 0x355490
void func_00355450_0x355450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00355450_0x355450");
#endif

    switch (ctx->pc) {
        case 0x355460u: goto label_355460;
        default: break;
    }

    ctx->pc = 0x355450u;

    // 0x355450: 0x8c821fc0  lw          $v0, 0x1FC0($a0)
    ctx->pc = 0x355450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x355454: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x355454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355458: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x355458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x35545c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x35545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_355460:
    // 0x355460: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x355460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355464: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x355464u;
    {
        const bool branch_taken_0x355464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x355468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355464u;
        // 0x355468: 0x248400f0  addiu       $a0, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355464) {
            ctx->pc = 0x355488u;
            goto label_355488;
        }
    }
    ctx->pc = 0x35546Cu;
    // 0x35546c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x35546cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x355470: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x355470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x355474: 0x0  nop
    ctx->pc = 0x355474u;
    // NOP
    // 0x355478: 0x0  nop
    ctx->pc = 0x355478u;
    // NOP
    // 0x35547c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x35547Cu;
    {
        const bool branch_taken_0x35547c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35547c) {
            ctx->pc = 0x355480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35547Cu;
            // 0x355480: 0x8c830058  lw          $v1, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355460;
        }
    }
    ctx->pc = 0x355484u;
    // 0x355484: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355488:
    // 0x355488: 0x3e00008  jr          $ra
    ctx->pc = 0x355488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355490u;
}
