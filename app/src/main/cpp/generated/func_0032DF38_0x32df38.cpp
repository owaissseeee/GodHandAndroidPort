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

// Function: func_0032DF38
// Address: 0x32df38 - 0x32df70
void func_0032DF38_0x32df38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032DF38_0x32df38");
#endif

    ctx->pc = 0x32df38u;

    // 0x32df38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32df38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32df3c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32DF3Cu;
    {
        const bool branch_taken_0x32df3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DF3Cu;
        // 0x32df40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32df3c) {
            ctx->pc = 0x32DF58u;
            goto label_32df58;
        }
    }
    ctx->pc = 0x32DF44u;
    // 0x32df44: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32df44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32df48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32df48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32df4c: 0x24842c20  addiu       $a0, $a0, 0x2C20
    ctx->pc = 0x32df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11296));
    // 0x32df50: 0x80cff2c  j           func_33FCB0
    ctx->pc = 0x32DF50u;
    ctx->pc = 0x32DF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DF50u;
    // 0x32df54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32DF50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32DF58u;
label_32df58:
    // 0x32df58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32df58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32df5c: 0xa08501b1  sb          $a1, 0x1B1($a0)
    ctx->pc = 0x32df5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 433), (uint8_t)GPR_U32(ctx, 5));
    // 0x32df60: 0x3e00008  jr          $ra
    ctx->pc = 0x32DF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DF60u;
        // 0x32df64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DF68u;
    // 0x32df68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32df68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32df6c: 0x0  nop
    ctx->pc = 0x32df6cu;
    // NOP
    ctx->pc = 0x32df70u;
}
