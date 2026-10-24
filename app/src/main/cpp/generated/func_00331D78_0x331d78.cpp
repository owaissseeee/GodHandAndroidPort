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

// Function: func_00331D78
// Address: 0x331d78 - 0x331db8
void func_00331D78_0x331d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331D78_0x331d78");
#endif

    ctx->pc = 0x331d78u;

    // 0x331d78: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x331d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x331d7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331d7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331d80: 0x8c438484  lw          $v1, -0x7B7C($v0)
    ctx->pc = 0x331d80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3D8484u));
    // 0x331d84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x331d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331d88: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x331D88u;
    {
        const bool branch_taken_0x331d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x331D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D88u;
        // 0x331d8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d88) {
            ctx->pc = 0x331DA0u;
            goto label_331da0;
        }
    }
    ctx->pc = 0x331D90u;
    // 0x331d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331d94: 0x80cedb4  j           func_33B6D0
    ctx->pc = 0x331D94u;
    ctx->pc = 0x331D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331D94u;
    // 0x331d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6D0u, 0x331D94u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x331D9Cu;
    // 0x331d9c: 0x0  nop
    ctx->pc = 0x331d9cu;
    // NOP
label_331da0:
    // 0x331da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331da4: 0x3e00008  jr          $ra
    ctx->pc = 0x331DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331DA4u;
        // 0x331da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331DACu;
    // 0x331dac: 0x0  nop
    ctx->pc = 0x331dacu;
    // NOP
    // 0x331db0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x331db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x331db4: 0x0  nop
    ctx->pc = 0x331db4u;
    // NOP
    ctx->pc = 0x331db8u;
}
