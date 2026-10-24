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

// Function: func_003BA878
// Address: 0x3ba878 - 0x3ba8c0
void func_003BA878_0x3ba878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA878_0x3ba878");
#endif

    ctx->pc = 0x3ba878u;

    // 0x3ba878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ba878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ba87c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BA87Cu;
    {
        const bool branch_taken_0x3ba87c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA87Cu;
        // 0x3ba880: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba87c) {
            ctx->pc = 0x3BA898u;
            goto label_3ba898;
        }
    }
    ctx->pc = 0x3BA884u;
    // 0x3ba884: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3ba884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3ba888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba88c: 0x24840af8  addiu       $a0, $a0, 0xAF8
    ctx->pc = 0x3ba88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2808));
    // 0x3ba890: 0x80ee778  j           func_3B9DE0
    ctx->pc = 0x3BA890u;
    ctx->pc = 0x3BA894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA890u;
    // 0x3ba894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DE0u, 0x3BA890u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BA898u;
label_3ba898:
    // 0x3ba898: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA898u;
    {
        const bool branch_taken_0x3ba898 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba898) {
            ctx->pc = 0x3BA8A8u;
            goto label_3ba8a8;
        }
    }
    ctx->pc = 0x3BA8A0u;
    // 0x3ba8a0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3ba8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3ba8a4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3ba8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3ba8a8:
    // 0x3ba8a8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA8A8u;
    {
        const bool branch_taken_0x3ba8a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA8A8u;
        // 0x3ba8ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba8a8) {
            ctx->pc = 0x3BA8B8u;
            goto label_3ba8b8;
        }
    }
    ctx->pc = 0x3BA8B0u;
    // 0x3ba8b0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3ba8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3ba8b4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3ba8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_3ba8b8:
    // 0x3ba8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA8B8u;
        // 0x3ba8bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA8C0u;
}
