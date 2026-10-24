#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: callExtraPlayQuit__9cEventEnv
// Address: 0x7aebc0 - 0x7aebe8
void callExtraPlayQuit__9cEventEnv_0x7aebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("callExtraPlayQuit__9cEventEnv_0x7aebc0");
#endif

    switch (ctx->pc) {
        case 0x7aebc0u: goto label_7aebc0;
        case 0x7aebc4u: goto label_7aebc4;
        case 0x7aebc8u: goto label_7aebc8;
        case 0x7aebccu: goto label_7aebcc;
        case 0x7aebd0u: goto label_7aebd0;
        case 0x7aebd4u: goto label_7aebd4;
        case 0x7aebd8u: goto label_7aebd8;
        case 0x7aebdcu: goto label_7aebdc;
        case 0x7aebe0u: goto label_7aebe0;
        case 0x7aebe4u: goto label_7aebe4;
        default: break;
    }

    ctx->pc = 0x7aebc0u;

label_7aebc0:
    // 0x7aebc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7aebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_7aebc4:
    // 0x7aebc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7aebc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_7aebc8:
    // 0x7aebc8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x7aebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_7aebcc:
    // 0x7aebcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_7aebd0:
    if (ctx->pc == 0x7AEBD0u) {
        ctx->pc = 0x7AEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEBCCu;
        // 0x7aebd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AEBD4u;
        goto label_7aebd4;
    }
    ctx->pc = 0x7AEBCCu;
    {
        const bool branch_taken_0x7aebcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEBCCu;
        // 0x7aebd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aebcc) {
            ctx->pc = 0x7AEBE0u;
            goto label_7aebe0;
        }
    }
    ctx->pc = 0x7AEBD4u;
label_7aebd4:
    // 0x7aebd4: 0x40f809  jalr        $v0
label_7aebd8:
    if (ctx->pc == 0x7AEBD8u) {
        ctx->pc = 0x7AEBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEBD4u;
        // 0x7aebd8: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AEBDCu;
        goto label_7aebdc;
    }
    ctx->pc = 0x7AEBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7AEBDCu);
        ctx->pc = 0x7AEBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEBD4u;
        // 0x7aebd8: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEBD4u, 0x7AEBDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7AEBDCu;
label_7aebdc:
    // 0x7aebdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7aebdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7aebe0:
    // 0x7aebe0: 0x3e00008  jr          $ra
label_7aebe4:
    if (ctx->pc == 0x7AEBE4u) {
        ctx->pc = 0x7AEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEBE0u;
        // 0x7aebe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AEBE8u;
        goto label_fallthrough_0x7aebe0;
    }
    ctx->pc = 0x7AEBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEBE0u;
        // 0x7aebe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7aebe0:
    ctx->pc = 0x7AEBE8u;
}
} // namespace gh_event
