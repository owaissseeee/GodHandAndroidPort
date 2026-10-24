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

// Function: func_00348CB8
// Address: 0x348cb8 - 0x348ce0
void func_00348CB8_0x348cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348CB8_0x348cb8");
#endif

    ctx->pc = 0x348cb8u;

    // 0x348cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348cbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x348cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348cc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348cc4: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x348cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x348cc8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x348CC8u;
    {
        const bool branch_taken_0x348cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x348CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CC8u;
        // 0x348ccc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348cc8) {
            ctx->pc = 0x348CD8u;
            goto label_348cd8;
        }
    }
    ctx->pc = 0x348CD0u;
    // 0x348cd0: 0x80d2338  j           func_348CE0
    ctx->pc = 0x348CD0u;
    ctx->pc = 0x348CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348CD0u;
    // 0x348cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348CE0u, 0x348CD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x348CD8u;
label_348cd8:
    // 0x348cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x348CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CD8u;
        // 0x348cdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348CE0u;
}
