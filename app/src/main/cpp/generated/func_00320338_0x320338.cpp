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

// Function: func_00320338
// Address: 0x320338 - 0x320360
void func_00320338_0x320338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00320338_0x320338");
#endif

    switch (ctx->pc) {
        case 0x320338u: goto label_320338;
        case 0x32033cu: goto label_32033c;
        case 0x320340u: goto label_320340;
        case 0x320344u: goto label_320344;
        case 0x320348u: goto label_320348;
        case 0x32034cu: goto label_32034c;
        case 0x320350u: goto label_320350;
        case 0x320354u: goto label_320354;
        case 0x320358u: goto label_320358;
        case 0x32035cu: goto label_32035c;
        default: break;
    }

    ctx->pc = 0x320338u;

label_320338:
    // 0x320338: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x320338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_32033c:
    // 0x32033c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32033cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320340:
    // 0x320340: 0x8c62490c  lw          $v0, 0x490C($v1)
    ctx->pc = 0x320340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18700)));
label_320344:
    // 0x320344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320348:
    // 0x320348: 0x40f809  jalr        $v0
label_32034c:
    if (ctx->pc == 0x32034Cu) {
        ctx->pc = 0x320350u;
        goto label_320350;
    }
    ctx->pc = 0x320348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320350u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320348u, 0x320350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320350u;
label_320350:
    // 0x320350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320354:
    // 0x320354: 0x3e00008  jr          $ra
label_320358:
    if (ctx->pc == 0x320358u) {
        ctx->pc = 0x320358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320354u;
        // 0x320358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32035Cu;
        goto label_32035c;
    }
    ctx->pc = 0x320354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320354u;
        // 0x320358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32035Cu;
label_32035c:
    // 0x32035c: 0x0  nop
    ctx->pc = 0x32035cu;
    // NOP
    ctx->pc = 0x320360u;
}
