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

// Function: what__C9exception
// Address: 0x3217f0 - 0x321818
void what__C9exception_0x3217f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("what__C9exception_0x3217f0");
#endif

    switch (ctx->pc) {
        case 0x3217f0u: goto label_3217f0;
        case 0x3217f4u: goto label_3217f4;
        case 0x3217f8u: goto label_3217f8;
        case 0x3217fcu: goto label_3217fc;
        case 0x321800u: goto label_321800;
        case 0x321804u: goto label_321804;
        case 0x321808u: goto label_321808;
        case 0x32180cu: goto label_32180c;
        case 0x321810u: goto label_321810;
        case 0x321814u: goto label_321814;
        default: break;
    }

    ctx->pc = 0x3217f0u;

label_3217f0:
    // 0x3217f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3217f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3217f4:
    // 0x3217f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3217f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3217f8:
    // 0x3217f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3217f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3217fc:
    // 0x3217fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3217fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_321800:
    // 0x321800: 0x40f809  jalr        $v0
label_321804:
    if (ctx->pc == 0x321804u) {
        ctx->pc = 0x321808u;
        goto label_321808;
    }
    ctx->pc = 0x321800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321808u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321800u, 0x321808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321808u;
label_321808:
    // 0x321808: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x321808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32180c:
    // 0x32180c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32180cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_321810:
    // 0x321810: 0x3e00008  jr          $ra
label_321814:
    if (ctx->pc == 0x321814u) {
        ctx->pc = 0x321814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321810u;
        // 0x321814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321818u;
        goto label_fallthrough_0x321810;
    }
    ctx->pc = 0x321810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321810u;
        // 0x321814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x321810:
    ctx->pc = 0x321818u;
}
