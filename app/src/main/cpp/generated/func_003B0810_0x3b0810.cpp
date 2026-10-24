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

// Function: func_003B0810
// Address: 0x3b0810 - 0x3b0878
void func_003B0810_0x3b0810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B0810_0x3b0810");
#endif

    switch (ctx->pc) {
        case 0x3b0840u: goto label_3b0840;
        case 0x3b0848u: goto label_3b0848;
        case 0x3b0860u: goto label_3b0860;
        default: break;
    }

    ctx->pc = 0x3b0810u;

    // 0x3b0810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b0810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b0814: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b0814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b0818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b0818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b081c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b081cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b0820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b0824: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x3b0824u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x3b0828: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b0828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b082c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3b082cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3b0830: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0830u;
    {
        const bool branch_taken_0x3b0830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0830) {
            ctx->pc = 0x3B0840u;
            goto label_3b0840;
        }
    }
    ctx->pc = 0x3B0838u;
    // 0x3b0838: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B0838u;
    SET_GPR_U32(ctx, 31, 0x3B0840u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B0838u, 0x3B0840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0840u;
label_3b0840:
    // 0x3b0840: 0xc0ebe80  jal         func_3AFA00
    ctx->pc = 0x3B0840u;
    SET_GPR_U32(ctx, 31, 0x3B0848u);
    ctx->pc = 0x3B0844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0840u;
    // 0x3b0844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFA00u, 0x3B0840u, 0x3B0848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0848u;
label_3b0848:
    // 0x3b0848: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b0848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b084c: 0xf  sync
    ctx->pc = 0x3b084cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b0850: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0850u;
    {
        const bool branch_taken_0x3b0850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0850u;
        // 0x3b0854: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0850) {
            ctx->pc = 0x3B0864u;
            goto label_3b0864;
        }
    }
    ctx->pc = 0x3B0858u;
    // 0x3b0858: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B0858u;
    SET_GPR_U32(ctx, 31, 0x3B0860u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B0858u, 0x3B0860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0860u;
label_3b0860:
    // 0x3b0860: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b0860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b0864:
    // 0x3b0864: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b0864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0868: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b0868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b086c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b086cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0870: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0870u;
        // 0x3b0874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0878u;
}
