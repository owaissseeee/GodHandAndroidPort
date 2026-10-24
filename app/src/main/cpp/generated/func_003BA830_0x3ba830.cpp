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

// Function: func_003BA830
// Address: 0x3ba830 - 0x3ba878
void func_003BA830_0x3ba830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA830_0x3ba830");
#endif

    ctx->pc = 0x3ba830u;

    // 0x3ba830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ba830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ba834: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BA834u;
    {
        const bool branch_taken_0x3ba834 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA834u;
        // 0x3ba838: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba834) {
            ctx->pc = 0x3BA850u;
            goto label_3ba850;
        }
    }
    ctx->pc = 0x3BA83Cu;
    // 0x3ba83c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3ba83cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3ba840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba844: 0x24840ad0  addiu       $a0, $a0, 0xAD0
    ctx->pc = 0x3ba844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2768));
    // 0x3ba848: 0x80ee778  j           func_3B9DE0
    ctx->pc = 0x3BA848u;
    ctx->pc = 0x3BA84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA848u;
    // 0x3ba84c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DE0u, 0x3BA848u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BA850u;
label_3ba850:
    // 0x3ba850: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA850u;
    {
        const bool branch_taken_0x3ba850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba850) {
            ctx->pc = 0x3BA860u;
            goto label_3ba860;
        }
    }
    ctx->pc = 0x3BA858u;
    // 0x3ba858: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x3ba858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3ba85c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3ba85cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3ba860:
    // 0x3ba860: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA860u;
    {
        const bool branch_taken_0x3ba860 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA860u;
        // 0x3ba864: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba860) {
            ctx->pc = 0x3BA870u;
            goto label_3ba870;
        }
    }
    ctx->pc = 0x3BA868u;
    // 0x3ba868: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x3ba868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3ba86c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3ba86cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_3ba870:
    // 0x3ba870: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA870u;
        // 0x3ba874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA878u;
}
