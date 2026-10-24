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

// Function: func_00335B40
// Address: 0x335b40 - 0x335b88
void func_00335B40_0x335b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335B40_0x335b40");
#endif

    switch (ctx->pc) {
        case 0x335b58u: goto label_335b58;
        default: break;
    }

    ctx->pc = 0x335b40u;

    // 0x335b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335b44: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x335B44u;
    {
        const bool branch_taken_0x335b44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x335B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B44u;
        // 0x335b48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335b44) {
            ctx->pc = 0x335B60u;
            goto label_335b60;
        }
    }
    ctx->pc = 0x335B4Cu;
    // 0x335b4c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x335b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x335b50: 0xc0cd750  jal         func_335D40
    ctx->pc = 0x335B50u;
    SET_GPR_U32(ctx, 31, 0x335B58u);
    ctx->pc = 0x335B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335B50u;
    // 0x335b54: 0x24844d68  addiu       $a0, $a0, 0x4D68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x335B50u, 0x335B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335B58u;
label_335b58:
    // 0x335b58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x335B58u;
    {
        const bool branch_taken_0x335b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B58u;
        // 0x335b5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335b58) {
            ctx->pc = 0x335B64u;
            goto label_335b64;
        }
    }
    ctx->pc = 0x335B60u;
label_335b60:
    // 0x335b60: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x335b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_335b64:
    // 0x335b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335b68: 0x3e00008  jr          $ra
    ctx->pc = 0x335B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B68u;
        // 0x335b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335B70u;
    // 0x335b70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x335b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x335b74: 0x0  nop
    ctx->pc = 0x335b74u;
    // NOP
    // 0x335b78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x335b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x335b7c: 0x0  nop
    ctx->pc = 0x335b7cu;
    // NOP
    // 0x335b80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x335b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x335b84: 0x0  nop
    ctx->pc = 0x335b84u;
    // NOP
    ctx->pc = 0x335b88u;
}
