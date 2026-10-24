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

// Function: func_00336CE0
// Address: 0x336ce0 - 0x336d08
void func_00336CE0_0x336ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00336CE0_0x336ce0");
#endif

    switch (ctx->pc) {
        case 0x336ce0u: goto label_336ce0;
        case 0x336ce4u: goto label_336ce4;
        case 0x336ce8u: goto label_336ce8;
        case 0x336cecu: goto label_336cec;
        case 0x336cf0u: goto label_336cf0;
        case 0x336cf4u: goto label_336cf4;
        case 0x336cf8u: goto label_336cf8;
        case 0x336cfcu: goto label_336cfc;
        case 0x336d00u: goto label_336d00;
        case 0x336d04u: goto label_336d04;
        default: break;
    }

    ctx->pc = 0x336ce0u;

label_336ce0:
    // 0x336ce0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x336ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_336ce4:
    // 0x336ce4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336ce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_336ce8:
    // 0x336ce8: 0x8c421424  lw          $v0, 0x1424($v0)
    ctx->pc = 0x336ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5156)));
label_336cec:
    // 0x336cec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_336cf0:
    if (ctx->pc == 0x336CF0u) {
        ctx->pc = 0x336CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336CECu;
        // 0x336cf0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336CF4u;
        goto label_336cf4;
    }
    ctx->pc = 0x336CECu;
    {
        const bool branch_taken_0x336cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336CECu;
        // 0x336cf0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336cec) {
            ctx->pc = 0x336CFCu;
            goto label_336cfc;
        }
    }
    ctx->pc = 0x336CF4u;
label_336cf4:
    // 0x336cf4: 0x40f809  jalr        $v0
label_336cf8:
    if (ctx->pc == 0x336CF8u) {
        ctx->pc = 0x336CFCu;
        goto label_336cfc;
    }
    ctx->pc = 0x336CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x336CFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336CF4u, 0x336CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x336CFCu;
label_336cfc:
    // 0x336cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_336d00:
    // 0x336d00: 0x3e00008  jr          $ra
label_336d04:
    if (ctx->pc == 0x336D04u) {
        ctx->pc = 0x336D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336D00u;
        // 0x336d04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336D08u;
        goto label_fallthrough_0x336d00;
    }
    ctx->pc = 0x336D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336D00u;
        // 0x336d04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x336d00:
    ctx->pc = 0x336D08u;
}
