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

// Function: cGameObj_getLockOnPos
// Address: 0x2a93a8 - 0x2a93d0
void cGameObj_getLockOnPos_0x2a93a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_getLockOnPos_0x2a93a8");
#endif

    switch (ctx->pc) {
        case 0x2a93a8u: goto label_2a93a8;
        case 0x2a93acu: goto label_2a93ac;
        case 0x2a93b0u: goto label_2a93b0;
        case 0x2a93b4u: goto label_2a93b4;
        case 0x2a93b8u: goto label_2a93b8;
        case 0x2a93bcu: goto label_2a93bc;
        case 0x2a93c0u: goto label_2a93c0;
        case 0x2a93c4u: goto label_2a93c4;
        case 0x2a93c8u: goto label_2a93c8;
        case 0x2a93ccu: goto label_2a93cc;
        default: break;
    }

    ctx->pc = 0x2a93a8u;

label_2a93a8:
    // 0x2a93a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a93a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a93ac:
    // 0x2a93ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a93acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a93b0:
    // 0x2a93b0: 0x8c830214  lw          $v1, 0x214($a0)
    ctx->pc = 0x2a93b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_2a93b4:
    // 0x2a93b4: 0x84650080  lh          $a1, 0x80($v1)
    ctx->pc = 0x2a93b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2a93b8:
    // 0x2a93b8: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x2a93b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2a93bc:
    // 0x2a93bc: 0x40f809  jalr        $v0
label_2a93c0:
    if (ctx->pc == 0x2A93C0u) {
        ctx->pc = 0x2A93C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93BCu;
        // 0x2a93c0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A93C4u;
        goto label_2a93c4;
    }
    ctx->pc = 0x2A93BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A93C4u);
        ctx->pc = 0x2A93C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93BCu;
        // 0x2a93c0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A93BCu, 0x2A93C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A93C4u;
label_2a93c4:
    // 0x2a93c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a93c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a93c8:
    // 0x2a93c8: 0x3e00008  jr          $ra
label_2a93cc:
    if (ctx->pc == 0x2A93CCu) {
        ctx->pc = 0x2A93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93C8u;
        // 0x2a93cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A93D0u;
        goto label_fallthrough_0x2a93c8;
    }
    ctx->pc = 0x2A93C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93C8u;
        // 0x2a93cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A93C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a93c8:
    ctx->pc = 0x2A93D0u;
}
