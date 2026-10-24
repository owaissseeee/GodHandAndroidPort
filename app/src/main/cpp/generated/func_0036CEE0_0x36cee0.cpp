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

// Function: func_0036CEE0
// Address: 0x36cee0 - 0x36cf08
void func_0036CEE0_0x36cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CEE0_0x36cee0");
#endif

    switch (ctx->pc) {
        case 0x36cee0u: goto label_36cee0;
        case 0x36cee4u: goto label_36cee4;
        case 0x36cee8u: goto label_36cee8;
        case 0x36ceecu: goto label_36ceec;
        case 0x36cef0u: goto label_36cef0;
        case 0x36cef4u: goto label_36cef4;
        case 0x36cef8u: goto label_36cef8;
        case 0x36cefcu: goto label_36cefc;
        case 0x36cf00u: goto label_36cf00;
        case 0x36cf04u: goto label_36cf04;
        default: break;
    }

    ctx->pc = 0x36cee0u;

label_36cee0:
    // 0x36cee0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_36cee4:
    // 0x36cee4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36cee8:
    // 0x36cee8: 0x8c422040  lw          $v0, 0x2040($v0)
    ctx->pc = 0x36cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8256)));
label_36ceec:
    // 0x36ceec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_36cef0:
    if (ctx->pc == 0x36CEF0u) {
        ctx->pc = 0x36CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CEECu;
        // 0x36cef0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CEF4u;
        goto label_36cef4;
    }
    ctx->pc = 0x36CEECu;
    {
        const bool branch_taken_0x36ceec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CEECu;
        // 0x36cef0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ceec) {
            ctx->pc = 0x36CEFCu;
            goto label_36cefc;
        }
    }
    ctx->pc = 0x36CEF4u;
label_36cef4:
    // 0x36cef4: 0x40f809  jalr        $v0
label_36cef8:
    if (ctx->pc == 0x36CEF8u) {
        ctx->pc = 0x36CEFCu;
        goto label_36cefc;
    }
    ctx->pc = 0x36CEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36CEFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CEF4u, 0x36CEFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36CEFCu;
label_36cefc:
    // 0x36cefc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36cf00:
    // 0x36cf00: 0x3e00008  jr          $ra
label_36cf04:
    if (ctx->pc == 0x36CF04u) {
        ctx->pc = 0x36CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CF00u;
        // 0x36cf04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CF08u;
        goto label_fallthrough_0x36cf00;
    }
    ctx->pc = 0x36CF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CF00u;
        // 0x36cf04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36cf00:
    ctx->pc = 0x36CF08u;
}
