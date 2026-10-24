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

// Function: func_003B9BB8
// Address: 0x3b9bb8 - 0x3b9bf0
void func_003B9BB8_0x3b9bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B9BB8_0x3b9bb8");
#endif

    ctx->pc = 0x3b9bb8u;

    // 0x3b9bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b9bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b9bbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b9bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b9bc0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3b9bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b9bc4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3b9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3b9bc8: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x3b9bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x3b9bcc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B9BCCu;
    {
        const bool branch_taken_0x3b9bcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9BCCu;
        // 0x3b9bd0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9bcc) {
            ctx->pc = 0x3B9BE0u;
            goto label_3b9be0;
        }
    }
    ctx->pc = 0x3B9BD4u;
    // 0x3b9bd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9bd8: 0x80ee816  j           func_3BA058
    ctx->pc = 0x3B9BD8u;
    ctx->pc = 0x3B9BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9BD8u;
    // 0x3b9bdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA058u, 0x3B9BD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B9BE0u;
label_3b9be0:
    // 0x3b9be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9be4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9BE4u;
        // 0x3b9be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9BECu;
    // 0x3b9bec: 0x0  nop
    ctx->pc = 0x3b9becu;
    // NOP
    ctx->pc = 0x3b9bf0u;
}
