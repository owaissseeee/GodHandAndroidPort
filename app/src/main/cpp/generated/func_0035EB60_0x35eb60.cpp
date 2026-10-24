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

// Function: func_0035EB60
// Address: 0x35eb60 - 0x35eb98
void func_0035EB60_0x35eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035EB60_0x35eb60");
#endif

    ctx->pc = 0x35eb60u;

    // 0x35eb60: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x35eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35eb64: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x35eb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x35eb68: 0x10860009  beq         $a0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x35EB68u;
    {
        const bool branch_taken_0x35eb68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x35EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB68u;
        // 0x35eb6c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb68) {
            ctx->pc = 0x35EB90u;
            goto label_35eb90;
        }
    }
    ctx->pc = 0x35EB70u;
    // 0x35eb70: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x35eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x35eb74: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35EB74u;
    {
        const bool branch_taken_0x35eb74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x35EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB74u;
        // 0x35eb78: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb74) {
            ctx->pc = 0x35EB90u;
            goto label_35eb90;
        }
    }
    ctx->pc = 0x35EB7Cu;
    // 0x35eb7c: 0x8ca30094  lw          $v1, 0x94($a1)
    ctx->pc = 0x35eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x35eb80: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x35eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35eb84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35eb88: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x35eb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x35eb8c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x35eb8cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_35eb90:
    // 0x35eb90: 0x3e00008  jr          $ra
    ctx->pc = 0x35EB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EB98u;
}
