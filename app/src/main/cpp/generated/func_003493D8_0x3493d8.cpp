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

// Function: func_003493D8
// Address: 0x3493d8 - 0x349408
void func_003493D8_0x3493d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003493D8_0x3493d8");
#endif

    switch (ctx->pc) {
        case 0x3493d8u: goto label_3493d8;
        case 0x3493dcu: goto label_3493dc;
        case 0x3493e0u: goto label_3493e0;
        case 0x3493e4u: goto label_3493e4;
        case 0x3493e8u: goto label_3493e8;
        case 0x3493ecu: goto label_3493ec;
        case 0x3493f0u: goto label_3493f0;
        case 0x3493f4u: goto label_3493f4;
        case 0x3493f8u: goto label_3493f8;
        case 0x3493fcu: goto label_3493fc;
        case 0x349400u: goto label_349400;
        case 0x349404u: goto label_349404;
        default: break;
    }

    ctx->pc = 0x3493d8u;

label_3493d8:
    // 0x3493d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3493d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3493dc:
    // 0x3493dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3493dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3493e0:
    // 0x3493e0: 0xc0d14ac  jal         func_3452B0
label_3493e4:
    if (ctx->pc == 0x3493E4u) {
        ctx->pc = 0x3493E8u;
        goto label_3493e8;
    }
    ctx->pc = 0x3493E0u;
    SET_GPR_U32(ctx, 31, 0x3493E8u);
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x3493E0u, 0x3493E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3493E8u;
label_3493e8:
    // 0x3493e8: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3493e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3493ec:
    // 0x3493ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3493f0:
    if (ctx->pc == 0x3493F0u) {
        ctx->pc = 0x3493F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3493ECu;
        // 0x3493f0: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3493F4u;
        goto label_3493f4;
    }
    ctx->pc = 0x3493ECu;
    {
        const bool branch_taken_0x3493ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3493F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3493ECu;
        // 0x3493f0: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3493ec) {
            ctx->pc = 0x3493FCu;
            goto label_3493fc;
        }
    }
    ctx->pc = 0x3493F4u;
label_3493f4:
    // 0x3493f4: 0x60f809  jalr        $v1
label_3493f8:
    if (ctx->pc == 0x3493F8u) {
        ctx->pc = 0x3493FCu;
        goto label_3493fc;
    }
    ctx->pc = 0x3493F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3493FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3493F4u, 0x3493FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3493FCu;
label_3493fc:
    // 0x3493fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3493fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_349400:
    // 0x349400: 0x3e00008  jr          $ra
label_349404:
    if (ctx->pc == 0x349404u) {
        ctx->pc = 0x349404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349400u;
        // 0x349404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349408u;
        goto label_fallthrough_0x349400;
    }
    ctx->pc = 0x349400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349400u;
        // 0x349404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x349400:
    ctx->pc = 0x349408u;
}
