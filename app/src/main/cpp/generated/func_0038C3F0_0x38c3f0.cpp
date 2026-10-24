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

// Function: func_0038C3F0
// Address: 0x38c3f0 - 0x38c418
void func_0038C3F0_0x38c3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038C3F0_0x38c3f0");
#endif

    switch (ctx->pc) {
        case 0x38c3f0u: goto label_38c3f0;
        case 0x38c3f4u: goto label_38c3f4;
        case 0x38c3f8u: goto label_38c3f8;
        case 0x38c3fcu: goto label_38c3fc;
        case 0x38c400u: goto label_38c400;
        case 0x38c404u: goto label_38c404;
        case 0x38c408u: goto label_38c408;
        case 0x38c40cu: goto label_38c40c;
        case 0x38c410u: goto label_38c410;
        case 0x38c414u: goto label_38c414;
        default: break;
    }

    ctx->pc = 0x38c3f0u;

label_38c3f0:
    // 0x38c3f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38c3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_38c3f4:
    // 0x38c3f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38c3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38c3f8:
    // 0x38c3f8: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x38c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_38c3fc:
    // 0x38c3fc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x38c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_38c400:
    // 0x38c400: 0x40f809  jalr        $v0
label_38c404:
    if (ctx->pc == 0x38C404u) {
        ctx->pc = 0x38C408u;
        goto label_38c408;
    }
    ctx->pc = 0x38C400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C408u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C400u, 0x38C408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C408u;
label_38c408:
    // 0x38c408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38c408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38c40c:
    // 0x38c40c: 0x3e00008  jr          $ra
label_38c410:
    if (ctx->pc == 0x38C410u) {
        ctx->pc = 0x38C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C40Cu;
        // 0x38c410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C414u;
        goto label_38c414;
    }
    ctx->pc = 0x38C40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C40Cu;
        // 0x38c410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C414u;
label_38c414:
    // 0x38c414: 0x0  nop
    ctx->pc = 0x38c414u;
    // NOP
    ctx->pc = 0x38c418u;
}
