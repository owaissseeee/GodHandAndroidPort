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

// Function: func_003B07A8
// Address: 0x3b07a8 - 0x3b0810
void func_003B07A8_0x3b07a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B07A8_0x3b07a8");
#endif

    switch (ctx->pc) {
        case 0x3b07d8u: goto label_3b07d8;
        case 0x3b07e0u: goto label_3b07e0;
        case 0x3b07f8u: goto label_3b07f8;
        default: break;
    }

    ctx->pc = 0x3b07a8u;

    // 0x3b07a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b07a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b07ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b07acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b07b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b07b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b07b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b07b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b07b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b07b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b07bc: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x3b07bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x3b07c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b07c4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3b07c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3b07c8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B07C8u;
    {
        const bool branch_taken_0x3b07c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b07c8) {
            ctx->pc = 0x3B07D8u;
            goto label_3b07d8;
        }
    }
    ctx->pc = 0x3B07D0u;
    // 0x3b07d0: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B07D0u;
    SET_GPR_U32(ctx, 31, 0x3B07D8u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B07D0u, 0x3B07D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B07D8u;
label_3b07d8:
    // 0x3b07d8: 0xc0ebe84  jal         func_3AFA10
    ctx->pc = 0x3B07D8u;
    SET_GPR_U32(ctx, 31, 0x3B07E0u);
    ctx->pc = 0x3B07DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B07D8u;
    // 0x3b07dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFA10u, 0x3B07D8u, 0x3B07E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B07E0u;
label_3b07e0:
    // 0x3b07e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b07e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b07e4: 0xf  sync
    ctx->pc = 0x3b07e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b07e8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B07E8u;
    {
        const bool branch_taken_0x3b07e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B07ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B07E8u;
        // 0x3b07ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b07e8) {
            ctx->pc = 0x3B07FCu;
            goto label_3b07fc;
        }
    }
    ctx->pc = 0x3B07F0u;
    // 0x3b07f0: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B07F0u;
    SET_GPR_U32(ctx, 31, 0x3B07F8u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B07F0u, 0x3B07F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B07F8u;
label_3b07f8:
    // 0x3b07f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b07f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b07fc:
    // 0x3b07fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b07fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0800: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b0800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b0804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b0804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0808: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0808u;
        // 0x3b080c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0810u;
}
