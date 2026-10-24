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

// Function: sceSifRpcLoop
// Address: 0x3b3818 - 0x3b3858
void sceSifRpcLoop_0x3b3818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifRpcLoop_0x3b3818");
#endif

    switch (ctx->pc) {
        case 0x3b3830u: goto label_3b3830;
        case 0x3b3838u: goto label_3b3838;
        case 0x3b3840u: goto label_3b3840;
        case 0x3b3850u: goto label_3b3850;
        default: break;
    }

    ctx->pc = 0x3b3818u;

    // 0x3b3818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b3818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b381c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b381cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3820: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b3820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b3824: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3824u;
    {
        const bool branch_taken_0x3b3824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3824u;
        // 0x3b3828: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3824) {
            ctx->pc = 0x3B3838u;
            goto label_3b3838;
        }
    }
    ctx->pc = 0x3B382Cu;
    // 0x3b382c: 0x0  nop
    ctx->pc = 0x3b382cu;
    // NOP
label_3b3830:
    // 0x3b3830: 0xc0ecd94  jal         func_3B3650
    ctx->pc = 0x3B3830u;
    SET_GPR_U32(ctx, 31, 0x3B3838u);
    ctx->pc = 0x3B3650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3650u, 0x3B3830u, 0x3B3838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3838u;
label_3b3838:
    // 0x3b3838: 0xc0ecd7e  jal         func_3B35F8
    ctx->pc = 0x3B3838u;
    SET_GPR_U32(ctx, 31, 0x3B3840u);
    ctx->pc = 0x3B383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3838u;
    // 0x3b383c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B35F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B35F8u, 0x3B3838u, 0x3B3840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3840u;
label_3b3840:
    // 0x3b3840: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3B3840u;
    {
        const bool branch_taken_0x3b3840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3840u;
        // 0x3b3844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3840) {
            ctx->pc = 0x3B3830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3830;
        }
    }
    ctx->pc = 0x3B3848u;
    // 0x3b3848: 0xc0ebef0  jal         func_3AFBC0
    ctx->pc = 0x3B3848u;
    SET_GPR_U32(ctx, 31, 0x3B3850u);
    ctx->pc = 0x3AFBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBC0u, 0x3B3848u, 0x3B3850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3850u;
label_3b3850:
    // 0x3b3850: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x3B3850u;
    {
        const bool branch_taken_0x3b3850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3850) {
            ctx->pc = 0x3B3838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3838;
        }
    }
    ctx->pc = 0x3B3858u;
}
