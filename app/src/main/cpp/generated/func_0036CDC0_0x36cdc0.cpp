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

// Function: func_0036CDC0
// Address: 0x36cdc0 - 0x36cde8
void func_0036CDC0_0x36cdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CDC0_0x36cdc0");
#endif

    switch (ctx->pc) {
        case 0x36cdc0u: goto label_36cdc0;
        case 0x36cdc4u: goto label_36cdc4;
        case 0x36cdc8u: goto label_36cdc8;
        case 0x36cdccu: goto label_36cdcc;
        case 0x36cdd0u: goto label_36cdd0;
        case 0x36cdd4u: goto label_36cdd4;
        case 0x36cdd8u: goto label_36cdd8;
        case 0x36cddcu: goto label_36cddc;
        case 0x36cde0u: goto label_36cde0;
        case 0x36cde4u: goto label_36cde4;
        default: break;
    }

    ctx->pc = 0x36cdc0u;

label_36cdc0:
    // 0x36cdc0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_36cdc4:
    // 0x36cdc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cdc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36cdc8:
    // 0x36cdc8: 0x8c422024  lw          $v0, 0x2024($v0)
    ctx->pc = 0x36cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8228)));
label_36cdcc:
    // 0x36cdcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_36cdd0:
    if (ctx->pc == 0x36CDD0u) {
        ctx->pc = 0x36CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CDCCu;
        // 0x36cdd0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CDD4u;
        goto label_36cdd4;
    }
    ctx->pc = 0x36CDCCu;
    {
        const bool branch_taken_0x36cdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CDCCu;
        // 0x36cdd0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cdcc) {
            ctx->pc = 0x36CDDCu;
            goto label_36cddc;
        }
    }
    ctx->pc = 0x36CDD4u;
label_36cdd4:
    // 0x36cdd4: 0x40f809  jalr        $v0
label_36cdd8:
    if (ctx->pc == 0x36CDD8u) {
        ctx->pc = 0x36CDDCu;
        goto label_36cddc;
    }
    ctx->pc = 0x36CDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36CDDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CDD4u, 0x36CDDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36CDDCu;
label_36cddc:
    // 0x36cddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36cde0:
    // 0x36cde0: 0x3e00008  jr          $ra
label_36cde4:
    if (ctx->pc == 0x36CDE4u) {
        ctx->pc = 0x36CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CDE0u;
        // 0x36cde4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CDE8u;
        goto label_fallthrough_0x36cde0;
    }
    ctx->pc = 0x36CDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CDE0u;
        // 0x36cde4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36cde0:
    ctx->pc = 0x36CDE8u;
}
