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

// Function: func_003B0740
// Address: 0x3b0740 - 0x3b07a8
void func_003B0740_0x3b0740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B0740_0x3b0740");
#endif

    switch (ctx->pc) {
        case 0x3b0770u: goto label_3b0770;
        case 0x3b0778u: goto label_3b0778;
        case 0x3b0790u: goto label_3b0790;
        default: break;
    }

    ctx->pc = 0x3b0740u;

    // 0x3b0740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b0740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b0744: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b0744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b0748: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b0748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b074c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b074cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b0750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b0754: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x3b0754u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x3b0758: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b0758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b075c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3b075cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3b0760: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0760u;
    {
        const bool branch_taken_0x3b0760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0760) {
            ctx->pc = 0x3B0770u;
            goto label_3b0770;
        }
    }
    ctx->pc = 0x3B0768u;
    // 0x3b0768: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B0768u;
    SET_GPR_U32(ctx, 31, 0x3B0770u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B0768u, 0x3B0770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0770u;
label_3b0770:
    // 0x3b0770: 0xc0ebe78  jal         func_3AF9E0
    ctx->pc = 0x3B0770u;
    SET_GPR_U32(ctx, 31, 0x3B0778u);
    ctx->pc = 0x3B0774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0770u;
    // 0x3b0774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF9E0u, 0x3B0770u, 0x3B0778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0778u;
label_3b0778:
    // 0x3b0778: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b0778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b077c: 0xf  sync
    ctx->pc = 0x3b077cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b0780: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0780u;
    {
        const bool branch_taken_0x3b0780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0780u;
        // 0x3b0784: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0780) {
            ctx->pc = 0x3B0794u;
            goto label_3b0794;
        }
    }
    ctx->pc = 0x3B0788u;
    // 0x3b0788: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B0788u;
    SET_GPR_U32(ctx, 31, 0x3B0790u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B0788u, 0x3B0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0790u;
label_3b0790:
    // 0x3b0790: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b0790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b0794:
    // 0x3b0794: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b0794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0798: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b0798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b079c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b079cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b07a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B07A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B07A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B07A0u;
        // 0x3b07a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B07A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B07A8u;
}
