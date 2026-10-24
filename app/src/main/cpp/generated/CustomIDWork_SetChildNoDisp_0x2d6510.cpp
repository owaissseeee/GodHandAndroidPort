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

// Function: CustomIDWork_SetChildNoDisp
// Address: 0x2d6510 - 0x2d6548
void CustomIDWork_SetChildNoDisp_0x2d6510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetChildNoDisp_0x2d6510");
#endif

    ctx->pc = 0x2d6510u;

    // 0x2d6510: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2d6510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6514: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D6514u;
    {
        const bool branch_taken_0x2d6514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6514) {
            ctx->pc = 0x2D653Cu;
            goto label_2d653c;
        }
    }
    ctx->pc = 0x2D651Cu;
    // 0x2d651c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D651Cu;
    {
        const bool branch_taken_0x2d651c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D651Cu;
        // 0x2d6520: 0x8c82002c  lw          $v0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d651c) {
            ctx->pc = 0x2D6530u;
            goto label_2d6530;
        }
    }
    ctx->pc = 0x2D6524u;
    // 0x2d6524: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2d6524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2d6528: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6528u;
        // 0x2d652c: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6530u;
label_2d6530:
    // 0x2d6530: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2d6530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2d6534: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d6534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d6538: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x2d6538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_2d653c:
    // 0x2d653c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D653Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D653Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6544u;
    // 0x2d6544: 0x0  nop
    ctx->pc = 0x2d6544u;
    // NOP
    ctx->pc = 0x2d6548u;
}
