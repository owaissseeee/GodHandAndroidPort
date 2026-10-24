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

// Function: func_002B4850
// Address: 0x2b4850 - 0x2b4880
void func_002B4850_0x2b4850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4850_0x2b4850");
#endif

    switch (ctx->pc) {
        case 0x2b4874u: goto label_2b4874;
        default: break;
    }

    ctx->pc = 0x2b4850u;

    // 0x2b4850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4854: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2b4854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b4858: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4858u;
    {
        const bool branch_taken_0x2b4858 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4858u;
        // 0x2b485c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4858) {
            ctx->pc = 0x2B4874u;
            goto label_2b4874;
        }
    }
    ctx->pc = 0x2B4860u;
    // 0x2b4860: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4860u;
    {
        const bool branch_taken_0x2b4860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4860u;
        // 0x2b4864: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4860) {
            ctx->pc = 0x2B4878u;
            goto label_2b4878;
        }
    }
    ctx->pc = 0x2B4868u;
    // 0x2b4868: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2b4868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2b486c: 0xc04e02a  jal         func_1380A8
    ctx->pc = 0x2B486Cu;
    SET_GPR_U32(ctx, 31, 0x2B4874u);
    ctx->pc = 0x2B4870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B486Cu;
    // 0x2b4870: 0x248475b0  addiu       $a0, $a0, 0x75B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1380A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1380A8u, 0x2B486Cu, 0x2B4874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4874u;
label_2b4874:
    // 0x2b4874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b4878:
    // 0x2b4878: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4878u;
        // 0x2b487c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4880u;
}
