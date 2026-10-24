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

// Function: terminate
// Address: 0x3211e0 - 0x3211f8
void terminate_0x3211e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("terminate_0x3211e0");
#endif

    switch (ctx->pc) {
        case 0x3211e0u: goto label_3211e0;
        case 0x3211e4u: goto label_3211e4;
        case 0x3211e8u: goto label_3211e8;
        case 0x3211ecu: goto label_3211ec;
        case 0x3211f0u: goto label_3211f0;
        case 0x3211f4u: goto label_3211f4;
        default: break;
    }

    ctx->pc = 0x3211e0u;

label_3211e0:
    // 0x3211e0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3211e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_3211e4:
    // 0x3211e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3211e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3211e8:
    // 0x3211e8: 0x8c434908  lw          $v1, 0x4908($v0)
    ctx->pc = 0x3211e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18696)));
label_3211ec:
    // 0x3211ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3211ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3211f0:
    // 0x3211f0: 0x60f809  jalr        $v1
label_3211f4:
    if (ctx->pc == 0x3211F4u) {
        ctx->pc = 0x3211F8u;
        goto label_fallthrough_0x3211f0;
    }
    ctx->pc = 0x3211F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3211F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3211F0u, 0x3211F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x3211f0:
    ctx->pc = 0x3211F8u;
}
