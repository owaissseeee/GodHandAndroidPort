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

// Function: func_00331D40
// Address: 0x331d40 - 0x331d78
void func_00331D40_0x331d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331D40_0x331d40");
#endif

    ctx->pc = 0x331d40u;

    // 0x331d40: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x331d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x331d44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331d44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331d48: 0x8c438484  lw          $v1, -0x7B7C($v0)
    ctx->pc = 0x331d48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3D8484u));
    // 0x331d4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x331d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331d50: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x331D50u;
    {
        const bool branch_taken_0x331d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x331D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D50u;
        // 0x331d54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d50) {
            ctx->pc = 0x331D68u;
            goto label_331d68;
        }
    }
    ctx->pc = 0x331D58u;
    // 0x331d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331d5c: 0x80ceda8  j           func_33B6A0
    ctx->pc = 0x331D5Cu;
    ctx->pc = 0x331D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331D5Cu;
    // 0x331d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6A0u, 0x331D5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x331D64u;
    // 0x331d64: 0x0  nop
    ctx->pc = 0x331d64u;
    // NOP
label_331d68:
    // 0x331d68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x331D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D6Cu;
        // 0x331d70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331D74u;
    // 0x331d74: 0x0  nop
    ctx->pc = 0x331d74u;
    // NOP
    ctx->pc = 0x331d78u;
}
