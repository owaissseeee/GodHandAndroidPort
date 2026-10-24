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

// Function: eh_context_initialize
// Address: 0x320388 - 0x3203b0
void eh_context_initialize_0x320388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eh_context_initialize_0x320388");
#endif

    switch (ctx->pc) {
        case 0x320388u: goto label_320388;
        case 0x32038cu: goto label_32038c;
        case 0x320390u: goto label_320390;
        case 0x320394u: goto label_320394;
        case 0x320398u: goto label_320398;
        case 0x32039cu: goto label_32039c;
        case 0x3203a0u: goto label_3203a0;
        case 0x3203a4u: goto label_3203a4;
        case 0x3203a8u: goto label_3203a8;
        case 0x3203acu: goto label_3203ac;
        default: break;
    }

    ctx->pc = 0x320388u;

label_320388:
    // 0x320388: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x320388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_32038c:
    // 0x32038c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32038cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320390:
    // 0x320390: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x320390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_320394:
    // 0x320394: 0x244203b0  addiu       $v0, $v0, 0x3B0
    ctx->pc = 0x320394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 944));
label_320398:
    // 0x320398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32039c:
    // 0x32039c: 0x40f809  jalr        $v0
label_3203a0:
    if (ctx->pc == 0x3203A0u) {
        ctx->pc = 0x3203A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32039Cu;
        // 0x3203a0: 0xac62490c  sw          $v0, 0x490C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3203A4u;
        goto label_3203a4;
    }
    ctx->pc = 0x32039Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3203A4u);
        ctx->pc = 0x3203A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32039Cu;
        // 0x3203a0: 0xac62490c  sw          $v0, 0x490C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32039Cu, 0x3203A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3203A4u;
label_3203a4:
    // 0x3203a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3203a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3203a8:
    // 0x3203a8: 0x3e00008  jr          $ra
label_3203ac:
    if (ctx->pc == 0x3203ACu) {
        ctx->pc = 0x3203ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203A8u;
        // 0x3203ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3203B0u;
        goto label_fallthrough_0x3203a8;
    }
    ctx->pc = 0x3203A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3203ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203A8u;
        // 0x3203ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3203A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3203a8:
    ctx->pc = 0x3203B0u;
}
