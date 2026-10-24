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

// Function: func_0032DEC8
// Address: 0x32dec8 - 0x32def8
void func_0032DEC8_0x32dec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032DEC8_0x32dec8");
#endif

    ctx->pc = 0x32dec8u;

    // 0x32dec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32dec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32decc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32DECCu;
    {
        const bool branch_taken_0x32decc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DECCu;
        // 0x32ded0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32decc) {
            ctx->pc = 0x32DEE8u;
            goto label_32dee8;
        }
    }
    ctx->pc = 0x32DED4u;
    // 0x32ded4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32ded4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32ded8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ded8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32dedc: 0x24842bf8  addiu       $a0, $a0, 0x2BF8
    ctx->pc = 0x32dedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11256));
    // 0x32dee0: 0x80cff2c  j           func_33FCB0
    ctx->pc = 0x32DEE0u;
    ctx->pc = 0x32DEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DEE0u;
    // 0x32dee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32DEE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32DEE8u;
label_32dee8:
    // 0x32dee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32dee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32deec: 0xa08501b0  sb          $a1, 0x1B0($a0)
    ctx->pc = 0x32deecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 432), (uint8_t)GPR_U32(ctx, 5));
    // 0x32def0: 0x3e00008  jr          $ra
    ctx->pc = 0x32DEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DEF0u;
        // 0x32def4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DEF8u;
}
