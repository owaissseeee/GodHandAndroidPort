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

// Function: __terminate
// Address: 0x320280 - 0x3202a8
void ps2___terminate_0x320280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___terminate_0x320280");
#endif

    switch (ctx->pc) {
        case 0x320280u: goto label_320280;
        case 0x320284u: goto label_320284;
        case 0x320288u: goto label_320288;
        case 0x32028cu: goto label_32028c;
        case 0x320290u: goto label_320290;
        case 0x320294u: goto label_320294;
        case 0x320298u: goto label_320298;
        case 0x32029cu: goto label_32029c;
        case 0x3202a0u: goto label_3202a0;
        case 0x3202a4u: goto label_3202a4;
        default: break;
    }

    ctx->pc = 0x320280u;

label_320280:
    // 0x320280: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x320280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_320284:
    // 0x320284: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320288:
    // 0x320288: 0x8c434908  lw          $v1, 0x4908($v0)
    ctx->pc = 0x320288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18696)));
label_32028c:
    // 0x32028c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32028cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320290:
    // 0x320290: 0x60f809  jalr        $v1
label_320294:
    if (ctx->pc == 0x320294u) {
        ctx->pc = 0x320298u;
        goto label_320298;
    }
    ctx->pc = 0x320290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x320298u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320290u, 0x320298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320298u;
label_320298:
    // 0x320298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32029c:
    // 0x32029c: 0x3e00008  jr          $ra
label_3202a0:
    if (ctx->pc == 0x3202A0u) {
        ctx->pc = 0x3202A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32029Cu;
        // 0x3202a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3202A4u;
        goto label_3202a4;
    }
    ctx->pc = 0x32029Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3202A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32029Cu;
        // 0x3202a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32029Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3202A4u;
label_3202a4:
    // 0x3202a4: 0x0  nop
    ctx->pc = 0x3202a4u;
    // NOP
    ctx->pc = 0x3202a8u;
}
