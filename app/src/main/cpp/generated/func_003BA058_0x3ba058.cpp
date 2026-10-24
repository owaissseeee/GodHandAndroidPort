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

// Function: func_003BA058
// Address: 0x3ba058 - 0x3ba088
void func_003BA058_0x3ba058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA058_0x3ba058");
#endif

    ctx->pc = 0x3ba058u;

    // 0x3ba058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ba058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ba05c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BA05Cu;
    {
        const bool branch_taken_0x3ba05c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA05Cu;
        // 0x3ba060: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba05c) {
            ctx->pc = 0x3BA078u;
            goto label_3ba078;
        }
    }
    ctx->pc = 0x3BA064u;
    // 0x3ba064: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3ba064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3ba068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba06c: 0x24840900  addiu       $a0, $a0, 0x900
    ctx->pc = 0x3ba06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2304));
    // 0x3ba070: 0x80ee778  j           func_3B9DE0
    ctx->pc = 0x3BA070u;
    ctx->pc = 0x3BA074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA070u;
    // 0x3ba074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DE0u, 0x3BA070u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BA078u;
label_3ba078:
    // 0x3ba078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba07c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3ba07cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3ba080: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA080u;
        // 0x3ba084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA088u;
}
